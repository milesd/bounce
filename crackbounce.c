#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

#define TARGET "df8buVKD4ny7g"
#define SALT   "df"
#define MAX_LEN 8

static const char CHARSET[] =
    "abcdefghijklmnopqrstuvwxyz"
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "0123456789"
    "!@#$%^&*()-_=+[]{}|;:',.<>?/`~";
static int NCHARS;

static int recurse(char *buf, int pos, int maxlen) {
    for (int i = 0; i < NCHARS; i++) {
        buf[pos] = CHARSET[i];
        buf[pos+1] = '\0';
        if (strcmp(crypt(buf, SALT), TARGET) == 0) {
            printf("FOUND: [%s]\n", buf);
            fflush(stdout);
            return 1;
        }
        if (pos + 1 < maxlen)
            if (recurse(buf, pos + 1, maxlen)) return 1;
    }
    return 0;
}

int main(void) {
    NCHARS = strlen(CHARSET);
    int ncpu = (int)sysconf(_SC_NPROCESSORS_ONLN);
    printf("Using %d processes, %d chars, lengths 1-%d\n", ncpu, NCHARS, MAX_LEN);
    fflush(stdout);

    for (int len = 1; len <= MAX_LEN; len++) {
        printf("  length %d...\n", len); fflush(stdout);
        /* Each child handles a slice of first-char choices */
        int slice = (NCHARS + ncpu - 1) / ncpu;
        pid_t pids[128];
        int nproc = 0;
        for (int start = 0; start < NCHARS; start += slice) {
            int end = start + slice < NCHARS ? start + slice : NCHARS;
            pid_t pid = fork();
            if (pid == 0) {
                /* Child */
                char buf[16] = {0};
                for (int i = start; i < end; i++) {
                    buf[0] = CHARSET[i];
                    buf[1] = '\0';
                    if (len == 1) {
                        if (strcmp(crypt(buf, SALT), TARGET) == 0) {
                            printf("FOUND: [%s]\n", buf); fflush(stdout);
                            exit(0);
                        }
                    } else {
                        if (recurse(buf, 1, len)) exit(0);
                    }
                }
                exit(1);
            }
            pids[nproc++] = pid;
        }
        int found = 0;
        for (int i = 0; i < nproc; i++) {
            int status;
            waitpid(pids[i], &status, 0);
            if (WEXITSTATUS(status) == 0) found = 1;
        }
        if (found) return 0;
    }
    printf("Not found.\n");
    return 1;
}
