/*
 * bounce - TCP port forwarder with telnet control interface
 * Copyright (c) 1993 by Robert Ziegler. All rights reserved.
 *
 * Reconstructed from QMAGIC i386 binary via Ghidra decompilation (2026).
 *
 * Usage: bounce [-f configfile] [-p controlport]
 *   -f configfile    load node config (hostname remote_port local_port per line)
 *   -p port          set control port (default 7000); also suppresses daemonizing
 *
 * Build: gcc -o bounce bounce.c -lcrypt
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <fcntl.h>
#include <ctype.h>
#include <errno.h>
#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/select.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#ifdef __linux__
#include <crypt.h>
#endif

#define DEFAULT_CTRL_PORT  7000
#define PASSWORD_HASH      "dfJoNBhDG4x92"
#define CTRL_PASSWORD_SALT "df"
#define INPUT_BUF_SIZE     512
#define DATA_BUF_SIZE      1024

#define STATE_BANNER   1
#define STATE_PASSWORD 2
#define STATE_MENU     3
#define STATE_ADD_NODE 4
#define STATE_DEL_NODE 5
#define STATE_DEL_CONN 6

#define MENU_TEXT \
    "Valid options:\r\n" \
    "1. List nodelist\r\n" \
    "2. Add node to list\r\n" \
    "3. Delete node from list\r\n" \
    "4. Show connections\r\n" \
    "5. Close connection\r\n" \
    "6. Shutdown system\r\n" \
    "7. Quit\r\n" \
    "Option: "

/* Outbound write chunk for a control connection. */
struct wbuf {
    char       *buf;       /* original malloc base (for free) */
    char       *write_ptr; /* current position to write from */
    int         len;       /* bytes remaining to send */
    int         space;     /* free bytes after the pending data */
    struct wbuf *next;
};

/* One buffered input line from a control connection. */
struct line {
    char        *text;
    struct line *next;
};

struct ctrl_conn {
    struct ctrl_conn *next;
    int               fd;
    int               state;
    char             *remote_ip;
    struct line      *input_head;
    struct wbuf      *write_head;
    struct line      *input_tail;
    struct wbuf      *write_tail;
    char             *input_buf;   /* fixed base of 512-byte line buffer */
    char             *input_ptr;   /* current write position in line buffer */
};

/* A forwarding endpoint loaded from config or added via control. */
struct node {
    struct node *next;
    char        *host;
    int          remote_port;
    int          local_port;
    int          listen_fd;
};

/* One active proxied TCP connection. */
struct proxy_conn {
    struct proxy_conn *next;
    int                client_fd;
    int                server_fd;
    char              *remote_ip;
    unsigned int       byte_count;
};

static int                ctrl_fd    = -1;
static int                shutdown_flag = 0;
static struct node       *nodes      = NULL;
static struct proxy_conn *proxy_conns = NULL;
static struct ctrl_conn  *ctrl_conns  = NULL;

/* Forward declarations */
static void ctrl_conn_close(struct ctrl_conn *c);
static void proxy_conn_close(struct proxy_conn *p);
static void handle_ctrl_input(struct ctrl_conn *c, const char *line);

/* ------------------------------------------------------------------ */
/* Cleanup / signal handling                                           */
/* ------------------------------------------------------------------ */

static void cleanup(void) {
    if (ctrl_fd >= 0) close(ctrl_fd);
    for (struct node *n = nodes; n; n = n->next)
        if (n->listen_fd > 0) close(n->listen_fd);
    exit(0);
}

static void signal_handler(int sig) {
    (void)sig;
    cleanup();
}

/* ------------------------------------------------------------------ */
/* Config loading                                                      */
/* ------------------------------------------------------------------ */

static int load_config(const char *filename) {
    FILE *f = fopen(filename, "r");
    if (!f) { perror(filename); return 0; }

    char host[1024];
    int  rport, lport, lineno = 0, rc;

    while ((rc = fscanf(f, " %s %d %d", host, &rport, &lport)) != EOF) {
        lineno++;
        if (rc == 3) {
            struct node *n  = malloc(sizeof(*n));
            n->host         = strdup(host);
            n->remote_port  = rport;
            n->local_port   = lport;
            n->listen_fd    = 0;
            n->next         = nodes;
            nodes           = n;
        } else {
            fprintf(stderr, "Error: %s is bad on line %d\n", filename, lineno);
            fclose(f);
            return 0;
        }
    }
    fclose(f);
    return 1;
}

/* ------------------------------------------------------------------ */
/* Socket helpers                                                      */
/* ------------------------------------------------------------------ */

/* Create all listen sockets (control port + one per node). */
static int init_sockets(int ctrl_port) {
    int fd = socket(AF_INET, SOCK_STREAM, 0);
    if (fd < 0) { perror("bounce: socket(serv_sock)"); return -1; }

    struct sockaddr_in addr = {0};
    addr.sin_family      = AF_INET;
    addr.sin_addr.s_addr = INADDR_ANY;
    addr.sin_port        = htons((uint16_t)ctrl_port);

    int one = 1;
    if (setsockopt(fd, SOL_SOCKET, SO_REUSEADDR, &one, sizeof(one)) < 0) {
        perror("bounce: setsockopt(serv_sock, reuseaddr)"); close(fd); return -1;
    }
    if (setsockopt(fd, SOL_SOCKET, SO_KEEPALIVE, &one, sizeof(one)) < 0) {
        perror("bounce: setsockopt(serv_sock, keepalive)"); close(fd); return -1;
    }
    if (bind(fd, (struct sockaddr *)&addr, sizeof(addr)) < 0) {
        perror("bounce: bind(serv_sock)"); close(fd); return -1;
    }
    listen(fd, 2);

    for (struct node *n = nodes; n; n = n->next) {
        struct sockaddr_in na = {0};
        na.sin_family      = AF_INET;
        na.sin_addr.s_addr = INADDR_ANY;
        na.sin_port        = htons((uint16_t)n->local_port);

        n->listen_fd = socket(AF_INET, SOCK_STREAM, 0);
        if (n->listen_fd < 0) {
            perror("bounce: socket(init_server)"); close(fd); return -1;
        }
        one = 1;
        if (setsockopt(n->listen_fd, SOL_SOCKET, SO_REUSEADDR, &one, sizeof(one)) < 0) {
            perror("bounce: setsockopt(init_server)"); close(fd); return -1;
        }
        one = 1;
        if (setsockopt(n->listen_fd, SOL_SOCKET, SO_KEEPALIVE, &one, sizeof(one)) < 0) {
            perror("bounce: setsockopt"); close(fd); return -1;
        }
        if (bind(n->listen_fd, (struct sockaddr *)&na, sizeof(na)) < 0) {
            perror("bounce: bind(init_server)"); close(fd); return -1;
        }
        listen(n->listen_fd, 5);
    }
    return fd;
}

/* ------------------------------------------------------------------ */
/* Daemonize                                                           */
/* ------------------------------------------------------------------ */

static void daemonize(void) {
    if (getpid() == 1) return;

    signal(SIGTTOU, SIG_IGN);
    signal(SIGTTIN, SIG_IGN);
    signal(SIGTSTP, SIG_IGN);

    pid_t pid = fork();
    if (pid < 0) { perror("fork"); exit(1); }
    if (pid > 0) exit(0);

    if (setpgrp() == -1) { perror("setpgrp"); exit(1); }

    for (int i = 0; i < 256; i++) close(i);
}

/* ------------------------------------------------------------------ */
/* Control connection I/O                                              */
/* ------------------------------------------------------------------ */

static void ctrl_write(struct ctrl_conn *c, const char *msg) {
    int len = (int)strlen(msg);
    if (len == 0) return;

    if (c->write_tail) {
        struct wbuf *w = c->write_tail;
        int copy = len < w->space ? len : w->space;
        if (copy > 0) {
            memcpy(w->write_ptr + w->len, msg, copy);
            w->len   += copy;
            w->space -= copy;
            msg += copy;
            len -= copy;
        }
    }
    if (len == 0) return;

    int sz = len < DATA_BUF_SIZE ? DATA_BUF_SIZE : len;
    struct wbuf *w = malloc(sizeof(*w));
    w->buf       = malloc(sz);
    w->write_ptr = w->buf;
    memcpy(w->buf, msg, len);
    w->len   = len;
    w->space = sz - len;
    w->next  = NULL;

    if (!c->write_head) c->write_head = w;
    else c->write_tail->next = w;
    c->write_tail = w;
}

static int ctrl_flush(struct ctrl_conn *c) {
    while (c->write_head) {
        struct wbuf *w = c->write_head;
        ssize_t n = write(c->fd, w->write_ptr, w->len);
        if (n < 0) return (errno == EAGAIN || errno == EWOULDBLOCK) ? 0 : -1;
        if (n < w->len) {
            w->write_ptr += n;
            w->len       -= n;
            return 0;
        }
        c->write_head = w->next;
        free(w->buf);
        free(w);
    }
    c->write_tail = NULL;
    return 0;
}

static void ctrl_enqueue_line(struct ctrl_conn *c, const char *text) {
    struct line *l = malloc(sizeof(*l));
    l->text = strdup(text);
    l->next = NULL;
    if (!c->input_head) c->input_head = l;
    else c->input_tail->next = l;
    c->input_tail = l;
}

static int ctrl_read(struct ctrl_conn *c) {
    char buf[DATA_BUF_SIZE];
    ssize_t n = read(c->fd, buf, sizeof(buf) - 1);
    if (n < 1) return (n == 0 || (errno != EAGAIN && errno != EWOULDBLOCK)) ? -1 : 0;

    char *ptr  = c->input_ptr;
    char *base = c->input_buf;

    for (ssize_t i = 0; i < n; i++) {
        char ch = buf[i];
        if (ch == '\n') {
            *ptr = '\0';
            ctrl_enqueue_line(c, base);
            ptr = base;
        } else if (ch == '\b' && ptr > base) {
            ptr--;
        } else if (ptr < base + INPUT_BUF_SIZE - 1 && isprint((unsigned char)ch)) {
            *ptr++ = ch;
        }
    }
    c->input_ptr = ptr;
    return 0;
}

static void ctrl_conn_close(struct ctrl_conn *c) {
    close(c->fd);
    if (ctrl_conns == c) ctrl_conns = c->next;
    else {
        for (struct ctrl_conn *p = ctrl_conns; p; p = p->next)
            if (p->next == c) { p->next = c->next; break; }
    }
    while (c->input_head) {
        struct line *l = c->input_head;
        c->input_head = l->next;
        free(l->text); free(l);
    }
    while (c->write_head) {
        struct wbuf *w = c->write_head;
        c->write_head = w->next;
        free(w->buf); free(w);
    }
    free(c->input_buf);
    free(c->remote_ip);
    free(c);
}

/* ------------------------------------------------------------------ */
/* Proxy connection management                                         */
/* ------------------------------------------------------------------ */

static void proxy_conn_close(struct proxy_conn *p) {
    close(p->client_fd);
    close(p->server_fd);
    if (proxy_conns == p) proxy_conns = p->next;
    else {
        for (struct proxy_conn *q = proxy_conns; q; q = q->next)
            if (q->next == p) { q->next = p->next; break; }
    }
    free(p->remote_ip);
    free(p);
}

/* ------------------------------------------------------------------ */
/* Control-interface menu commands                                     */
/* ------------------------------------------------------------------ */

static void list_nodes(struct ctrl_conn *c) {
    ctrl_write(c, "Current nodes:\r\n");
    int i = 1;
    for (struct node *n = nodes; n; n = n->next, i++) {
        char buf[256];
        snprintf(buf, sizeof(buf), "  [%3d] %5d -> %s:%d\r\n",
                 i, n->local_port, n->host, n->remote_port);
        ctrl_write(c, buf);
    }
    if (i == 1) ctrl_write(c, "  None defined\r\n");
}

/* Input format: "lport:rhost:rport" */
static void add_node(struct ctrl_conn *c, const char *input) {
    char tmp[1024];
    strncpy(tmp, input, sizeof(tmp) - 1);
    tmp[sizeof(tmp) - 1] = '\0';

    char *colon1 = strchr(tmp, ':');
    if (!colon1) { ctrl_write(c, "Invalid format\r\n"); return; }
    *colon1++ = '\0';
    int lport = atoi(tmp);

    char *colon2 = strchr(colon1, ':');
    if (!colon2) { ctrl_write(c, "Invalid format\r\n"); return; }
    *colon2++ = '\0';
    int rport = atoi(colon2);

    struct node *n = malloc(sizeof(*n));
    n->host        = strdup(colon1);
    n->remote_port = rport;
    n->local_port  = lport;

    struct sockaddr_in addr = {0};
    addr.sin_family      = AF_INET;
    addr.sin_addr.s_addr = INADDR_ANY;
    addr.sin_port        = htons((uint16_t)lport);

    n->listen_fd = socket(AF_INET, SOCK_STREAM, 0);
    if (n->listen_fd < 0) {
        perror("bounce: (add_node)");
        ctrl_write(c, "Can't open socket\r\n");
        free(n->host); free(n); return;
    }
    int one = 1;
    if (setsockopt(n->listen_fd, SOL_SOCKET, SO_REUSEADDR, &one, sizeof(one)) < 0) {
        perror("bounce: setsockopt(init_server)");
        ctrl_write(c, "Can't set socket option SO_REUSEADDR\r\n");
        close(n->listen_fd); free(n->host); free(n); return;
    }
    one = 1;
    if (setsockopt(n->listen_fd, SOL_SOCKET, SO_KEEPALIVE, &one, sizeof(one)) < 0) {
        perror("bounce: setsockopt");
        ctrl_write(c, "Can't set socket option SO_KEEPALIVE\r\n");
        close(n->listen_fd); free(n->host); free(n); return;
    }
    if (bind(n->listen_fd, (struct sockaddr *)&addr, sizeof(addr)) < 0) {
        perror("bounce: bind(init_server)");
        ctrl_write(c, "Can't bind socket\r\n");
        close(n->listen_fd); free(n->host); free(n); return;
    }
    listen(n->listen_fd, 5);
    n->next = nodes;
    nodes   = n;
}

static void delete_node(struct ctrl_conn *c, const char *input) {
    int idx = atoi(input);
    if (idx < 1) { ctrl_write(c, "Number must be greater than zero\r\n"); return; }

    struct node *n = nodes, *prev = NULL;
    for (int i = 1; i < idx && n; i++, prev = n, n = n->next);
    if (!n) { ctrl_write(c, "Node does not exist\r\n"); return; }

    close(n->listen_fd);
    free(n->host);
    if (!prev) nodes = n->next; else prev->next = n->next;
    free(n);
}

static void list_connections(struct ctrl_conn *c) {
    ctrl_write(c, "Current connections:\r\n");
    int i = 1;
    for (struct proxy_conn *p = proxy_conns; p; p = p->next, i++) {
        char buf[256];
        snprintf(buf, sizeof(buf), "  [%3d] %s (%u bytes)\r\n",
                 i, p->remote_ip, p->byte_count);
        ctrl_write(c, buf);
    }
    if (i == 1) ctrl_write(c, "  No connections\r\n");
}

static void close_connection_by_num(struct ctrl_conn *c, const char *input) {
    int idx = atoi(input);
    if (idx < 1) { ctrl_write(c, "Number must be greater than zero\r\n"); return; }

    struct proxy_conn *p = proxy_conns;
    for (int i = 1; i < idx && p; i++, p = p->next);
    if (!p) { ctrl_write(c, "Connection does not exist\r\n"); return; }
    proxy_conn_close(p);
}

/* ------------------------------------------------------------------ */
/* Control state machine                                               */
/* ------------------------------------------------------------------ */

static void handle_ctrl_input(struct ctrl_conn *c, const char *line) {
    switch (c->state) {
    case STATE_BANNER:
        ctrl_write(c, "Bounce Control Central\r\n");
        ctrl_write(c, "Copyright (c) 1993 by Robert Ziegler\r\n");
        ctrl_write(c, "All rights reserved.\r\n");
        ctrl_write(c, "Enter control password: ");
        c->state = STATE_PASSWORD;
        break;

    case STATE_PASSWORD: {
        char *hashed = crypt(line, CTRL_PASSWORD_SALT);
        if (hashed && strcmp(PASSWORD_HASH, hashed) == 0) {
            ctrl_write(c, MENU_TEXT);
            c->state = STATE_MENU;
        } else {
            ctrl_conn_close(c);
        }
        break;
    }

    case STATE_MENU:
        switch (atoi(line)) {
        case 1: list_nodes(c);        ctrl_write(c, MENU_TEXT); break;
        case 2: ctrl_write(c, "Enter node(lport:rhost:rport): ");
                c->state = STATE_ADD_NODE; break;
        case 3: list_nodes(c);        ctrl_write(c, "Node to delete: ");
                c->state = STATE_DEL_NODE; break;
        case 4: list_connections(c);  ctrl_write(c, MENU_TEXT); break;
        case 5: list_connections(c);  ctrl_write(c, "Connection to delete: ");
                c->state = STATE_DEL_CONN; break;
        case 6: shutdown_flag = 1; break;
        case 7: ctrl_conn_close(c); break;
        default: ctrl_write(c, MENU_TEXT);
        }
        break;

    case STATE_ADD_NODE:
        add_node(c, line);
        c->state = STATE_MENU;
        ctrl_write(c, MENU_TEXT);
        break;

    case STATE_DEL_NODE:
        delete_node(c, line);
        c->state = STATE_MENU;
        ctrl_write(c, MENU_TEXT);
        break;

    case STATE_DEL_CONN:
        close_connection_by_num(c, line);
        c->state = STATE_MENU;
        ctrl_write(c, MENU_TEXT);
        break;
    }
}

/* ------------------------------------------------------------------ */
/* Accept new connections                                              */
/* ------------------------------------------------------------------ */

static struct ctrl_conn *accept_ctrl_conn(void) {
    struct sockaddr_in addr;
    socklen_t addrlen = sizeof(addr);
    int fd = accept(ctrl_fd, (struct sockaddr *)&addr, &addrlen);
    if (fd < 0) { perror("accept"); return NULL; }

    fcntl(fd, F_SETFL, O_NONBLOCK);
    int one = 1;
    setsockopt(fd, SOL_SOCKET, SO_KEEPALIVE, &one, sizeof(one));

    struct ctrl_conn *c = malloc(sizeof(*c));
    c->fd          = fd;
    c->state       = STATE_BANNER;
    c->remote_ip   = strdup(inet_ntoa(addr.sin_addr));
    c->input_head  = NULL;
    c->input_tail  = NULL;
    c->write_head  = NULL;
    c->write_tail  = NULL;
    c->input_buf   = malloc(INPUT_BUF_SIZE);
    c->input_ptr   = c->input_buf;
    c->next        = ctrl_conns;
    ctrl_conns     = c;

    handle_ctrl_input(c, "");   /* trigger banner immediately */
    return c;
}

static struct proxy_conn *accept_proxy_conn(struct node *n) {
    struct sockaddr_in caddr;
    socklen_t addrlen = sizeof(caddr);
    int cfd = accept(n->listen_fd, (struct sockaddr *)&caddr, &addrlen);
    if (cfd < 0) { perror("accept"); return NULL; }

    fcntl(cfd, F_SETFL, O_NONBLOCK);
    int one = 1;
    setsockopt(cfd, SOL_SOCKET, SO_KEEPALIVE, &one, sizeof(one));

    /* Resolve remote host */
    struct in_addr raddr;
    char *remote_ip;
    struct hostent *he = gethostbyname(n->host);
    if (!he) {
        uint32_t ia = inet_addr(n->host);
        if (ia == (uint32_t)-1) {
            fprintf(stderr, "%s: unknown host\n", n->host);
            close(cfd); return NULL;
        }
        raddr.s_addr = ia;
        remote_ip    = strdup(n->host);
    } else {
        memcpy(&raddr, he->h_addr_list[0], he->h_length);
        remote_ip = strdup(inet_ntoa(raddr));
    }

    int sfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sfd < 0) {
        perror("bounce: socket(add_connection)");
        close(cfd); free(remote_ip); return NULL;
    }
    one = 1;
    if (setsockopt(sfd, SOL_SOCKET, SO_KEEPALIVE, &one, sizeof(one)) < 0) {
        perror("bounce: setsockopt(add_connection)");
        close(cfd); close(sfd); free(remote_ip); return NULL;
    }

    struct sockaddr_in saddr = {0};
    saddr.sin_family = AF_INET;
    saddr.sin_addr   = raddr;
    saddr.sin_port   = htons((uint16_t)n->remote_port);
    if (connect(sfd, (struct sockaddr *)&saddr, sizeof(saddr)) < 0) {
        perror("bounce: connect");
        close(cfd); close(sfd); free(remote_ip); return NULL;
    }
    fcntl(sfd, F_SETFL, O_NONBLOCK);

    struct proxy_conn *p = malloc(sizeof(*p));
    p->client_fd  = cfd;
    p->server_fd  = sfd;
    p->remote_ip  = remote_ip;
    p->byte_count = 0;
    p->next       = proxy_conns;
    proxy_conns   = p;
    return p;
}

/* ------------------------------------------------------------------ */
/* Relay                                                               */
/* ------------------------------------------------------------------ */

static int relay_data(struct proxy_conn *p, int to_fd, char *buf, int len) {
    int remaining = len;
    while (remaining > 0) {
        ssize_t n = write(to_fd, buf, remaining);
        if (n < 1) return (int)n;
        p->byte_count += (unsigned int)(n * 2);
        remaining -= n;
        buf       += n;
    }
    return len;
}

/* ------------------------------------------------------------------ */
/* Main select loop                                                    */
/* ------------------------------------------------------------------ */

static void main_loop(void) {
    char data_buf[DATA_BUF_SIZE];

    while (!shutdown_flag) {
        fd_set rfds, wfds, efds;
        FD_ZERO(&rfds); FD_ZERO(&wfds); FD_ZERO(&efds);

        int nfds = ctrl_fd;
        FD_SET(ctrl_fd, &rfds);

        for (struct node *n = nodes; n; n = n->next) {
            FD_SET(n->listen_fd, &rfds);
            if (n->listen_fd > nfds) nfds = n->listen_fd;
        }

        for (struct proxy_conn *p = proxy_conns; p; p = p->next) {
            FD_SET(p->client_fd, &rfds); FD_SET(p->client_fd, &efds);
            FD_SET(p->server_fd, &rfds); FD_SET(p->server_fd, &efds);
            if (p->client_fd > nfds) nfds = p->client_fd;
            if (p->server_fd > nfds) nfds = p->server_fd;
        }

        for (struct ctrl_conn *c = ctrl_conns; c; c = c->next) {
            if (!c->write_head) FD_SET(c->fd, &rfds);
            else                FD_SET(c->fd, &wfds);
            FD_SET(c->fd, &efds);
            if (c->fd > nfds) nfds = c->fd;
        }

        int rc = select(nfds + 1, &rfds, &wfds, &efds, NULL);
        if (rc < 0 && errno != EINTR) { perror("bounce: select"); return; }

        /* New control connection */
        if (FD_ISSET(ctrl_fd, &rfds))
            accept_ctrl_conn();

        /* Control connections: read / write / error */
        for (struct ctrl_conn *c = ctrl_conns; c; ) {
            struct ctrl_conn *next = c->next;
            if (FD_ISSET(c->fd, &efds)) {
                ctrl_conn_close(c);
            } else {
                if (FD_ISSET(c->fd, &rfds) && ctrl_read(c) < 0) {
                    ctrl_conn_close(c); c = next; continue;
                }
                if (FD_ISSET(c->fd, &wfds) && ctrl_flush(c) < 0) {
                    ctrl_conn_close(c); c = next; continue;
                }
            }
            c = next;
        }

        /* Dispatch pending input lines to state machine */
        int again;
        do {
            again = 0;
            for (struct ctrl_conn *c = ctrl_conns; c; ) {
                struct ctrl_conn *next = c->next;
                if (c->input_head) {
                    struct line *l = c->input_head;
                    c->input_head  = l->next;
                    if (!c->input_head) c->input_tail = NULL;
                    int had_more = (l->next != NULL);
                    handle_ctrl_input(c, l->text); /* may free c via ctrl_conn_close */
                    free(l->text); free(l);
                    if (had_more) again = 1;
                }
                c = next;
            }
        } while (again);

        /* Proxy connections: relay data / handle errors */
        for (struct proxy_conn *p = proxy_conns; p; ) {
            struct proxy_conn *next = p->next;
            if (FD_ISSET(p->client_fd, &efds) || FD_ISSET(p->server_fd, &efds)) {
                proxy_conn_close(p); p = next; continue;
            }
            if (FD_ISSET(p->server_fd, &rfds)) {
                ssize_t n = read(p->server_fd, data_buf, sizeof(data_buf));
                if (n < 1) {
                    if (errno != EAGAIN && errno != EWOULDBLOCK)
                        { proxy_conn_close(p); p = next; continue; }
                } else if (relay_data(p, p->client_fd, data_buf, n) < 1 &&
                           errno != EAGAIN && errno != EWOULDBLOCK) {
                    proxy_conn_close(p); p = next; continue;
                }
            }
            if (FD_ISSET(p->client_fd, &rfds)) {
                ssize_t n = read(p->client_fd, data_buf, sizeof(data_buf));
                if (n < 1) {
                    if (errno != EAGAIN && errno != EWOULDBLOCK)
                        { proxy_conn_close(p); p = next; continue; }
                } else if (relay_data(p, p->server_fd, data_buf, n) < 1 &&
                           errno != EAGAIN && errno != EWOULDBLOCK) {
                    proxy_conn_close(p); p = next; continue;
                }
            }
            p = next;
        }

        /* New proxy connections */
        for (struct node *n = nodes; n; n = n->next) {
            if (FD_ISSET(n->listen_fd, &rfds))
                accept_proxy_conn(n);
        }
    }
}

/* ------------------------------------------------------------------ */
/* Entry point                                                         */
/* ------------------------------------------------------------------ */

static void usage(const char *prog) {
    fprintf(stderr, "Usage: %s [-f filename] [-p port number]\n", prog);
    exit(1);
}

int main(int argc, char **argv) {
    const char *prog = argv[0];
    int ctrl_port    = DEFAULT_CTRL_PORT;
    int foreground   = 0;

    argc--; argv++;
    while (argc > 0) {
        if (strcmp(*argv, "-f") == 0) {
            if (argc < 2) usage(prog);
            if (!load_config(argv[1])) return 1;
            argv += 2; argc -= 2;
        } else if (strcmp(*argv, "-p") == 0) {
            if (argc < 2) usage(prog);
            ctrl_port  = atoi(argv[1]);
            foreground = 1;     /* -p suppresses daemonizing */
            if (ctrl_port < 0 || ctrl_port > 65535) {
                fprintf(stderr, "Invalid control port number.\n");
                usage(prog);
            }
            argv += 2; argc -= 2;
        } else {
            usage(prog);
        }
    }

    if (!foreground) daemonize();

    signal(SIGINT,  signal_handler);
    signal(SIGTERM, signal_handler);

    ctrl_fd = init_sockets(ctrl_port);
    if (ctrl_fd < 0) { cleanup(); return 1; }

    main_loop();
    cleanup();
    return 0;
}
