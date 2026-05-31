# bounce

**TCP port forwarder with live telnet control interface**
*Copyright © 1993 Robert Ziegler. Source reconstructed from binary, 2026.*

I never had the source for this, but I finally got around to decompiling it after 30 years.

Pretty much, yeah — SSH killed it. `ssh -L 9605:remotemachine.domain:21` does the same thing as that bouncerc config in one flag, with encryption on top, and no hardcoded password in a binary on the relay machine.

The era this was built for (1993–1995) was a specific window: rsh/rlogin were the "trusted host" norm, firewalls were rare and dumb (IP-level only), and the security model was basically "if you're on the campus network you're fine." Bounce worked because you could telnet to a machine, bounce through it to an FTP server behind a firewall, and nobody was watching layer-4 traffic.

What made it a nice hack specifically:

- Persistent daemon — SSH tunnels die with the session; bounce kept running
- Telnet control interface — you could add/remove forward rules live without restarting
- Pre-auth wasn't required on the relay — just having a shell account on an intermediate machine was enough

`socat` is probably the closest modern equivalent in spirit — it's still used for quick-and-dirty TCP splicing. But for the "get past a firewall in college" use case, you'd just use SSH's `-L`/`-R`/`-D` flags today, or WireGuard if you want it persistent.

The interesting thing about the binary: it was compiled for Linux QMAGIC format, which predates ELF (ELF became standard on Linux around 1995). So this was genuinely early-days Linux — kernel 0.99 or 1.0 era stuff.

---

## How it worked

The original binary (`bounce`) is a stripped Linux/i386 QMAGIC executable — the format
that predates ELF. It was decompiled using Ghidra's headless analyzer against the a.out
loader, then reconstructed into `bounce.c`.

The config file (`bouncerc`) maps local listen ports to remote destinations:

```text
# Remote host         remote port   local port
remotemachine.domain  21            9605
```

`bounce` listens on port 9605; any TCP connection to it is forwarded transparently to
`remotemachine.domain:21`. Multiple entries = multiple forwarded ports, all in one daemon.

## Build

```sh
# Linux
gcc -O2 -o bounce bounce.c -lcrypt

# macOS (crypt is in libc)
gcc -O2 -o bounce bounce.c
```

Requires a C11 compiler. No other dependencies.

## Usage

```text
bounce [-f configfile] [-p controlport]
```

| Flag              | Default | Description                                        |
|-------------------|---------|----------------------------------------------------|
| `-f configfile`   | none    | Load forwarding rules (can repeat)                 |
| `-p port`         | 7000    | Control port; also keeps bounce in the foreground  |

Without `-p`, bounce daemonizes and listens for control connections on port 7000.

**Start with a config file, run in foreground on port 28801:**

```sh
bounce -f bouncerc -p 28801
```

**Start as a background daemon on the default control port:**

```sh
bounce -f bouncerc
```

## Control interface

Telnet to the control port. You'll be prompted for a password, then get a menu:

```text
$ telnet localhost 28801
Bounce Control Central
Copyright (c) 1993 by Robert Ziegler
All rights reserved.
Enter control password: ••••••
Valid options:
1. List nodelist
2. Add node to list
3. Delete node from list
4. Show connections
5. Close connection
6. Shutdown system
7. Quit
Option:
```

Nodes can be added/removed live without restarting. Option 2 takes the format
`localport:remotehost:remoteport`.

## Changing the password

The control password is a standard DES crypt hash in `bounce.c`. To set a new one:

```sh
# Generate hash (Linux)
python3 -c "import crypt; print(crypt.crypt('yourpassword', 'ab'))"

# Generate hash (macOS)
python3 -c "
import ctypes, ctypes.util
libc = ctypes.CDLL(ctypes.util.find_library('c'))
libc.crypt.restype = ctypes.c_char_p
print(libc.crypt(b'yourpassword', b'ab').decode())
"
```

Replace the `PASSWORD_HASH` and `CTRL_PASSWORD_SALT` defines at the top of `bounce.c`,
then recompile.

## Files

| File | Description |
| ---- | ----------- |
| `bounce` | Original 1993 binary (Linux/i386 QMAGIC format) |
| `bounce.c` | Reconstructed C source |
| `bounce.init` | Original startup script |
| `bouncerc` | Original config file |
| `DecompileAll.java` | Ghidra headless script that decompiled all functions and dumped them to C; needed to re-run the decompilation or examine any specific function |
| `bounce_decompiled.c` | Raw 27,380-line Ghidra output before reconstruction — 571 functions, most statically-linked libc, application logic in the first ~1,200 lines |
