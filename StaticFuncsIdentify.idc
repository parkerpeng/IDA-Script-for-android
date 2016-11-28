#include <idc.idc>

static modifyFuncName(funcAddr, syscallNum){
	auto numStr, syscallFuncName;
	
	syscallFuncName = ""; 
	
if( 0 == syscallNum ){ syscallFuncName = "restart_syscall" ; } 
else if( 1 == syscallNum ){ syscallFuncName = "exit" ; } 
else if( 2 == syscallNum ){ syscallFuncName = "fork" ; } 
else if( 3 == syscallNum ){ syscallFuncName = "read" ; } 
else if( 4 == syscallNum ){ syscallFuncName = "write" ; } 
else if( 5 == syscallNum ){ syscallFuncName = "open" ; } 
else if( 6 == syscallNum ){ syscallFuncName = "close" ; } 
//else if( 7 == syscallNum ){ syscallFuncName = "" ; } 
else if( 8 == syscallNum ){ syscallFuncName = "creat" ; }
else if( 9 == syscallNum ){ syscallFuncName = "link" ; } 
else if( 10 == syscallNum ){ syscallFuncName = "unlink" ; } 
else if( 11 == syscallNum ){ syscallFuncName = "execve" ; } 
else if( 12 == syscallNum ){ syscallFuncName = "chdir" ; }
else if( 13 == syscallNum ){ syscallFuncName = "time" ; }
else if( 14 == syscallNum ){ syscallFuncName = "mknod" ; }
else if( 15 == syscallNum ){ syscallFuncName = "chmod" ; }
else if( 16 == syscallNum ){ syscallFuncName = "lchown" ; }
//else if( 17 == syscallNum ){ syscallFuncName = "" ; }
//else if( 18 == syscallNum ){ syscallFuncName = "" ; }
else if( 19 == syscallNum ){ syscallFuncName = "lseek" ; }
else if( 20 == syscallNum ){ syscallFuncName = "getpid" ; }
else if( 21 == syscallNum ){ syscallFuncName = "mount" ; }
else if( 22 == syscallNum ){ syscallFuncName = "umount" ; }
else if( 23 == syscallNum ){ syscallFuncName = "setuid" ; }
else if( 24 == syscallNum ){ syscallFuncName = "getuid" ; }
else if( 25 == syscallNum ){ syscallFuncName = "stime" ; }
else if( 26 == syscallNum ){ syscallFuncName = "ptrace" ; }
else if( 27 == syscallNum ){ syscallFuncName = "alarm" ; }
//else if( 28 == syscallNum ){ syscallFuncName = "" ; }
else if( 29 == syscallNum ){ syscallFuncName = "pause" ; }
else if( 30 == syscallNum ){ syscallFuncName = "utime" ; }
//else if( 31 == syscallNum ){ syscallFuncName = "" ; }
//else if( 32 == syscallNum ){ syscallFuncName = "" ; }
else if( 33 == syscallNum ){ syscallFuncName = "access" ; }
else if( 34 == syscallNum ){ syscallFuncName = "nice" ; }
//else if( 35 == syscallNum ){ syscallFuncName = "" ; }
else if( 36 == syscallNum ){ syscallFuncName = "sync" ; }
else if( 37 == syscallNum ){ syscallFuncName = "kill" ; }
else if( 38 == syscallNum ){ syscallFuncName = "rename" ; }
else if( 39 == syscallNum ){ syscallFuncName = "rename" ; }
else if( 40 == syscallNum ){ syscallFuncName = "rmdir" ; }
else if( 41 == syscallNum ){ syscallFuncName = "dup" ; }
else if( 42 == syscallNum ){ syscallFuncName = "pipe" ; }
else if( 43 == syscallNum ){ syscallFuncName = "times" ; }
//else if( 44 == syscallNum ){ syscallFuncName = "" ; }
else if( 45 == syscallNum ){ syscallFuncName = "brk" ; }
else if( 46 == syscallNum ){ syscallFuncName = "setgid" ; }
else if( 47 == syscallNum ){ syscallFuncName = "getgid" ; }
//else if( 48 == syscallNum ){ syscallFuncName = "" ; }
else if( 49 == syscallNum ){ syscallFuncName = "geteuid" ; }
else if( 50 == syscallNum ){ syscallFuncName = "getegid" ; }
else if( 51 == syscallNum ){ syscallFuncName = "acct" ; }
else if( 52 == syscallNum ){ syscallFuncName = "umount2" ; }
//else if( 53 == syscallNum ){ syscallFuncName = "" ; }
else if( 54 == syscallNum ){ syscallFuncName = "ioctl" ; }
else if( 55 == syscallNum ){ syscallFuncName = "fcntl" ; }
else if( 56 == syscallNum ){ syscallFuncName = "mpx" ; }
else if( 57 == syscallNum ){ syscallFuncName = "setpgid" ; }
else if( 58 == syscallNum ){ syscallFuncName = "ulimit" ; }
else if( 59 == syscallNum ){ syscallFuncName = "olduname" ; }
else if( 60 == syscallNum ){ syscallFuncName = "umask" ; }
else if( 61 == syscallNum ){ syscallFuncName = "chroot" ; }
else if( 62 == syscallNum ){ syscallFuncName = "ustat" ; }
else if( 63 == syscallNum ){ syscallFuncName = "dup2" ; }
else if( 64 == syscallNum ){ syscallFuncName = "getppid" ; }
else if( 65 == syscallNum ){ syscallFuncName = "getpgrp" ; }
else if( 66 == syscallNum ){ syscallFuncName = "setsid" ; }
else if( 67 == syscallNum ){ syscallFuncName = "sigaction" ; }
//else if( 68 == syscallNum ){ syscallFuncName = "" ; }
//else if( 69 == syscallNum ){ syscallFuncName = "" ; }
else if( 70 == syscallNum ){ syscallFuncName = "setreuid" ; }
else if( 71 == syscallNum ){ syscallFuncName = "setregid" ; }
else if( 72 == syscallNum ){ syscallFuncName = "sigsuspend" ; }
else if( 73 == syscallNum ){ syscallFuncName = "sigpending" ; }
else if( 74 == syscallNum ){ syscallFuncName = "sethostname" ; }
else if( 75 == syscallNum ){ syscallFuncName = "setrlimit" ; }
else if( 76 == syscallNum ){ syscallFuncName = "getrlimit" ; }
else if( 77 == syscallNum ){ syscallFuncName = "getrusage" ; }
else if( 78 == syscallNum ){ syscallFuncName = "gettimeofday" ; }
else if( 79 == syscallNum ){ syscallFuncName = "settimeofday" ; }
else if( 80 == syscallNum ){ syscallFuncName = "getgroups" ; }
else if( 81 == syscallNum ){ syscallFuncName = "setgroups" ; }
else if( 82 == syscallNum ){ syscallFuncName = "select" ; }
else if( 83 == syscallNum ){ syscallFuncName = "symlink" ; }
//else if( 84 == syscallNum ){ syscallFuncName = "" ; }
else if( 85 == syscallNum ){ syscallFuncName = "readlink" ; }
else if( 86 == syscallNum ){ syscallFuncName = "uselib" ; }
else if( 87 == syscallNum ){ syscallFuncName = "swapon" ; }
else if( 88 == syscallNum ){ syscallFuncName = "reboot" ; }
else if( 89 == syscallNum ){ syscallFuncName = "readdir" ; }
else if( 90 == syscallNum ){ syscallFuncName = "mmap" ; }
else if( 91 == syscallNum ){ syscallFuncName = "munmap" ; }
else if( 92 == syscallNum ){ syscallFuncName = "truncate" ; }
else if( 93 == syscallNum ){ syscallFuncName = "ftruncate" ; }
else if( 94 == syscallNum ){ syscallFuncName = "fchmod" ; }
else if( 95 == syscallNum ){ syscallFuncName = "fchown" ; }
else if( 96 == syscallNum ){ syscallFuncName = "getpriority" ; }
else if( 97 == syscallNum ){ syscallFuncName = "setpriority" ; }
//else if( 98 == syscallNum ){ syscallFuncName = "" ; }
else if( 99 == syscallNum ){ syscallFuncName = "statfs" ; }
else if( 100 == syscallNum ){ syscallFuncName = "fstatfs" ; }
else if( 101 == syscallNum ){ syscallFuncName = "ioperm" ; }
else if( 102 == syscallNum ){ syscallFuncName = "socketcall" ; }
else if( 103 == syscallNum ){ syscallFuncName = "syslog" ; }
else if( 104 == syscallNum ){ syscallFuncName = "setitimer" ; }
else if( 105 == syscallNum ){ syscallFuncName = "getitimer" ; }
else if( 106 == syscallNum ){ syscallFuncName = "stat" ; }
else if( 107 == syscallNum ){ syscallFuncName = "lstat" ; }
else if( 108 == syscallNum ){ syscallFuncName = "fstat" ; }
//else if( 109 == syscallNum ){ syscallFuncName = "" ; }
//else if( 110 == syscallNum ){ syscallFuncName = "" ; }
else if( 111 == syscallNum ){ syscallFuncName = "vhangup" ; }
//else if( 112 == syscallNum ){ syscallFuncName = "" ; }
else if( 113 == syscallNum ){ syscallFuncName = "syscall" ; }
else if( 114 == syscallNum ){ syscallFuncName = "wait4" ; }
else if( 115 == syscallNum ){ syscallFuncName = "swapoff" ; }
else if( 116 == syscallNum ){ syscallFuncName = "sysinfo" ; }
else if( 117 == syscallNum ){ syscallFuncName = "ipc" ; }
else if( 118 == syscallNum ){ syscallFuncName = "fsync" ; }
else if( 119 == syscallNum ){ syscallFuncName = "sigreturn" ; }
else if( 120 == syscallNum ){ syscallFuncName = "clone" ; }
else if( 121 == syscallNum ){ syscallFuncName = "setdomainname" ; }
else if( 122 == syscallNum ){ syscallFuncName = "uname" ; }
//else if( 123 == syscallNum ){ syscallFuncName = "" ; }
else if( 124 == syscallNum ){ syscallFuncName = "adjtimex" ; }
else if( 125 == syscallNum ){ syscallFuncName = "mprotect" ; }
else if( 126 == syscallNum ){ syscallFuncName = "sigprocmask" ; }
//else if( 127 == syscallNum ){ syscallFuncName = "" ; }
else if( 128 == syscallNum ){ syscallFuncName = "init_module" ; }
else if( 129 == syscallNum ){ syscallFuncName = "delete_module" ; }
else if( 130 == syscallNum ){ syscallFuncName = "" ; }
else if( 131 == syscallNum ){ syscallFuncName = "quotactl" ; }
else if( 132 == syscallNum ){ syscallFuncName = "getpgid" ; }
else if( 133 == syscallNum ){ syscallFuncName = "fchdir" ; }
else if( 134 == syscallNum ){ syscallFuncName = "bdflush" ; }
else if( 135 == syscallNum ){ syscallFuncName = "sysfs" ; }
else if( 136 == syscallNum ){ syscallFuncName = "personality" ; }
//else if( 137 == syscallNum ){ syscallFuncName = "" ; }
else if( 138 == syscallNum ){ syscallFuncName = "setfsuid" ; }
else if( 139 == syscallNum ){ syscallFuncName = "setfsgid" ; }
else if( 140 == syscallNum ){ syscallFuncName = "llseek" ; }
else if( 141 == syscallNum ){ syscallFuncName = "getdents" ; }
else if( 142 == syscallNum ){ syscallFuncName = "_newselect" ; }
else if( 143 == syscallNum ){ syscallFuncName = "flock" ; }
else if( 144 == syscallNum ){ syscallFuncName = "msync" ; }
else if( 145 == syscallNum ){ syscallFuncName = "readv" ; }
else if( 146 == syscallNum ){ syscallFuncName = "writev" ; }
else if( 147 == syscallNum ){ syscallFuncName = "getsid" ; }
else if( 148 == syscallNum ){ syscallFuncName = "fdatasync" ; }
else if( 149 == syscallNum ){ syscallFuncName = "sysctl" ; }
else if( 150 == syscallNum ){ syscallFuncName = "mlock" ; }
else if( 151 == syscallNum ){ syscallFuncName = "munlock" ; }
else if( 152 == syscallNum ){ syscallFuncName = "mlockall" ; }
else if( 153 == syscallNum ){ syscallFuncName = "munlockall" ; }
else if( 154 == syscallNum ){ syscallFuncName = "sched_setparam" ; }
else if( 155 == syscallNum ){ syscallFuncName = "sched_getparam" ; }
else if( 156 == syscallNum ){ syscallFuncName = "sched_setscheduler" ; }
else if( 157 == syscallNum ){ syscallFuncName = "sched_getscheduler" ; }
else if( 158 == syscallNum ){ syscallFuncName = "sched_yield" ; }
else if( 159 == syscallNum ){ syscallFuncName = "sched_get_priority_max" ; }
else if( 160 == syscallNum ){ syscallFuncName = "sched_get_priority_min" ; }
else if( 161 == syscallNum ){ syscallFuncName = "sched_rr_get_interval" ; }
else if( 162 == syscallNum ){ syscallFuncName = "nanosleep" ; }
else if( 163 == syscallNum ){ syscallFuncName = "mremap" ; }
else if( 164 == syscallNum ){ syscallFuncName = "setresuid" ; }
else if( 165 == syscallNum ){ syscallFuncName = "getresuid" ; }
else if( 166 == syscallNum ){ syscallFuncName = "vm86" ; }
else if( 167 == syscallNum ){ syscallFuncName = "query_module" ; }
else if( 168 == syscallNum ){ syscallFuncName = "poll" ; }
else if( 169 == syscallNum ){ syscallFuncName = "nfsservctl" ; }
else if( 170 == syscallNum ){ syscallFuncName = "setresgid" ; }
else if( 171 == syscallNum ){ syscallFuncName = "getresgid" ; }
else if( 172 == syscallNum ){ syscallFuncName = "prctl" ; }
else if( 173 == syscallNum ){ syscallFuncName = "rt_sigreturn" ; } 
else if( 174 == syscallNum ){ syscallFuncName = "rt_sigaction" ; }
else if( 175 == syscallNum ){ syscallFuncName = "rt_sigprocmask" ; }
else if( 176 == syscallNum ){ syscallFuncName = "rt_sigpending" ; } 
else if( 177 == syscallNum ){ syscallFuncName = "rt_sigtimedwait" ; } 
else if( 178 == syscallNum ){ syscallFuncName = "rt_sigqueueinfo" ; }
else if( 179 == syscallNum ){ syscallFuncName = "rt_sigsuspend" ; }
else if( 180 == syscallNum ){ syscallFuncName = "pread64" ; }
else if( 181 == syscallNum ){ syscallFuncName = "pwrite64" ; }
else if( 182 == syscallNum ){ syscallFuncName = "chown" ; }
else if( 183 == syscallNum ){ syscallFuncName = "getcwd" ; }
else if( 184 == syscallNum ){ syscallFuncName = "capget" ; }
else if( 184 == syscallNum ){ syscallFuncName = "capset" ; }
else if( 186 == syscallNum ){ syscallFuncName = "sigaltstack" ; }
else if( 187 == syscallNum ){ syscallFuncName = "sendfile" ; }
//else if( 188 == syscallNum ){ syscallFuncName = "" ; }
//else if( 189 == syscallNum ){ syscallFuncName = "" ; }
else if( 190 == syscallNum ){ syscallFuncName = "vfork" ; }
else if( 191 == syscallNum ){ syscallFuncName = "ugetrlimit" ; }
else if( 192 == syscallNum ){ syscallFuncName = "mmap2" ; }
else if( 193 == syscallNum ){ syscallFuncName = "truncate64" ; }
else if( 194 == syscallNum ){ syscallFuncName = "ftruncate64" ; }
else if( 195 == syscallNum ){ syscallFuncName = "stat64" ; }
else if( 196 == syscallNum ){ syscallFuncName = "lstat64" ; }
else if( 197 == syscallNum ){ syscallFuncName = "fstat64" ; }
else if( 198 == syscallNum ){ syscallFuncName = "lchown32" ; }
else if( 199 == syscallNum ){ syscallFuncName = "getuid32" ; }
else if( 200 == syscallNum ){ syscallFuncName = "getgid32" ; }
else if( 201 == syscallNum ){ syscallFuncName = "geteuid32" ; }
else if( 202 == syscallNum ){ syscallFuncName = "getegid32" ; }
else if( 203 == syscallNum ){ syscallFuncName = "setreuid32" ; }
else if( 204 == syscallNum ){ syscallFuncName = "setregid32" ; }
else if( 205 == syscallNum ){ syscallFuncName = "getgroups32" ; }
else if( 206 == syscallNum ){ syscallFuncName = "setgroups32" ; }
else if( 207 == syscallNum ){ syscallFuncName = "fchown32" ; }
else if( 208 == syscallNum ){ syscallFuncName = "setresuid32" ; }
else if( 209 == syscallNum ){ syscallFuncName = "getresuid32" ; }
else if( 210 == syscallNum ){ syscallFuncName = "setresgid32" ; }
else if( 211 == syscallNum ){ syscallFuncName = "setresgid32" ; }
else if( 212 == syscallNum ){ syscallFuncName = "chown32" ; }
else if( 213 == syscallNum ){ syscallFuncName = "setuid32" ; }
else if( 214 == syscallNum ){ syscallFuncName = "setgid32" ; }
else if( 215 == syscallNum ){ syscallFuncName = "setfsuid32" ; }
else if( 216 == syscallNum ){ syscallFuncName = "setfsgid32" ; }
else if( 217 == syscallNum ){ syscallFuncName = "getdents64" ; }
else if( 218 == syscallNum ){ syscallFuncName = "pivot_root" ; }
else if( 219 == syscallNum ){ syscallFuncName = "mincore" ; }
else if( 220 == syscallNum ){ syscallFuncName = "madvise" ; }
else if( 221 == syscallNum ){ syscallFuncName = "fcntl64" ; }
else if( 222 == syscallNum ){ syscallFuncName = "tux" ; }
//else if( 223 == syscallNum ){ syscallFuncName = "" ; }
else if( 224 == syscallNum ){ syscallFuncName = "gettid" ; }
else if( 225 == syscallNum ){ syscallFuncName = "readahead" ; }
else if( 226 == syscallNum ){ syscallFuncName = "setxattr" ; }
else if( 227 == syscallNum ){ syscallFuncName = "lsetxattr" ; }
else if( 228 == syscallNum ){ syscallFuncName = "fsetxattr" ; }
else if( 229 == syscallNum ){ syscallFuncName = "getxattr" ; }
else if( 230 == syscallNum ){ syscallFuncName = "lgetxattr" ; }
else if( 231 == syscallNum ){ syscallFuncName = "fgetxattr" ; }
else if( 232 == syscallNum ){ syscallFuncName = "listxattr" ; }
else if( 233 == syscallNum ){ syscallFuncName = "llistxattr" ; }
else if( 234 == syscallNum ){ syscallFuncName = "flistxattr" ; }
else if( 235 == syscallNum ){ syscallFuncName = "removexattr" ; }
else if( 236 == syscallNum ){ syscallFuncName = "lremovexattr" ; }
else if( 237 == syscallNum ){ syscallFuncName = "fremovexattr" ; }
else if( 238 == syscallNum ){ syscallFuncName = "tkill" ; }
else if( 239 == syscallNum ){ syscallFuncName = "sendfile64" ; }
else if( 240 == syscallNum ){ syscallFuncName = "futex" ; }
else if( 241 == syscallNum ){ syscallFuncName = "sched_setaffinity" ; }
else if( 242 == syscallNum ){ syscallFuncName = "sched_getaffinity" ; }
else if( 243 == syscallNum ){ syscallFuncName = "io_setup" ; }
else if( 244 == syscallNum ){ syscallFuncName = "io_destroy" ; }
else if( 245 == syscallNum ){ syscallFuncName = "io_getevents" ; }
else if( 246 == syscallNum ){ syscallFuncName = "io_submit" ; }
else if( 247 == syscallNum ){ syscallFuncName = "io_cancel" ; }
else if( 248 == syscallNum ){ syscallFuncName = "exit_group" ; }
else if( 249 == syscallNum ){ syscallFuncName = "lookup_dcookie" ; }
else if( 250 == syscallNum ){ syscallFuncName = "epoll_create" ; }
else if( 251 == syscallNum ){ syscallFuncName = "epoll_ctl" ; }
else if( 252 == syscallNum ){ syscallFuncName = "epoll_wait" ; }
else if( 253 == syscallNum ){ syscallFuncName = "remap_file_pages" ; }
//else if( 254 == syscallNum ){ syscallFuncName = "" ; }
//else if( 255 == syscallNum ){ syscallFuncName = "" ; }
else if( 256 == syscallNum ){ syscallFuncName = "set_tid_address" ; }
else if( 257 == syscallNum ){ syscallFuncName = "timer_create" ; }
else if( 258 == syscallNum ){ syscallFuncName = "timer_settime" ; }
else if( 259 == syscallNum ){ syscallFuncName = "timer_gettime" ; }
else if( 260 == syscallNum ){ syscallFuncName = "timer_getoverrun" ; }
else if( 261 == syscallNum ){ syscallFuncName = "timer_delete" ; }
else if( 262 == syscallNum ){ syscallFuncName = "clock_settime" ; }
else if( 262 == syscallNum ){ syscallFuncName = "clock_gettime" ; }
else if( 264 == syscallNum ){ syscallFuncName = "clock_getres" ; }
else if( 265 == syscallNum ){ syscallFuncName = "clock_nanosleep" ; }
else if( 266 == syscallNum ){ syscallFuncName = "statfs64" ; }
else if( 267 == syscallNum ){ syscallFuncName = "fstatfs64" ; }
else if( 268 == syscallNum ){ syscallFuncName = "tgkill" ; }
else if( 269 == syscallNum ){ syscallFuncName = "utimes" ; }
else if( 270 == syscallNum ){ syscallFuncName = "arm_fadvise64_64" ; }
else if( 271 == syscallNum ){ syscallFuncName = "pciconfig_iobase" ; }
else if( 272 == syscallNum ){ syscallFuncName = "pciconfig_read" ; }
else if( 273 == syscallNum ){ syscallFuncName = "pciconfig_write" ; }
else if( 274 == syscallNum ){ syscallFuncName = "mq_open" ; }
else if( 275 == syscallNum ){ syscallFuncName = "mq_unlink" ; }
else if( 276 == syscallNum ){ syscallFuncName = "mq_timedsend" ; }
else if( 277 == syscallNum ){ syscallFuncName = "mq_timedreceive" ; }
else if( 278 == syscallNum ){ syscallFuncName = "mq_notify" ; }
else if( 279 == syscallNum ){ syscallFuncName = "mq_getsetattr" ; }
else if( 280 == syscallNum ){ syscallFuncName = "waitid" ; }
else if( 281 == syscallNum ){ syscallFuncName = "socket" ; }
else if( 282 == syscallNum ){ syscallFuncName = "bind" ; }
else if( 283 == syscallNum ){ syscallFuncName = "connect" ; }
else if( 284 == syscallNum ){ syscallFuncName = "listen" ; }
else if( 285 == syscallNum ){ syscallFuncName = "accept" ; }
else if( 286 == syscallNum ){ syscallFuncName = "getsockname" ; }
else if( 287 == syscallNum ){ syscallFuncName = "getpeername" ; }
else if( 288 == syscallNum ){ syscallFuncName = "socketpair" ; }
else if( 289 == syscallNum ){ syscallFuncName = "send" ; }
else if( 290 == syscallNum ){ syscallFuncName = "sendto" ; }
else if( 291 == syscallNum ){ syscallFuncName = "recv" ; }
else if( 292 == syscallNum ){ syscallFuncName = "recvfrom" ; }
else if( 293 == syscallNum ){ syscallFuncName = "shutdown" ; }
else if( 294 == syscallNum ){ syscallFuncName = "setsockopt" ; }
else if( 295 == syscallNum ){ syscallFuncName = "getsockopt" ; }
else if( 296 == syscallNum ){ syscallFuncName = "sendmsg" ; }
else if( 297 == syscallNum ){ syscallFuncName = "recvmsg" ; }
else if( 298 == syscallNum ){ syscallFuncName = "semop" ; }
else if( 299 == syscallNum ){ syscallFuncName = "semget" ; }
else if( 300 == syscallNum ){ syscallFuncName = "semctl" ; }
else if( 301 == syscallNum ){ syscallFuncName = "msgsnd" ; }
else if( 302 == syscallNum ){ syscallFuncName = "msgrcv" ; }
else if( 303 == syscallNum ){ syscallFuncName = "msgget" ; }
else if( 304 == syscallNum ){ syscallFuncName = "msgctl" ; }
else if( 305 == syscallNum ){ syscallFuncName = "shmat" ; }
else if( 306 == syscallNum ){ syscallFuncName = "shmdt" ; }
else if( 307 == syscallNum ){ syscallFuncName = "shmget" ; }
else if( 308 == syscallNum ){ syscallFuncName = "shmctl" ; }
else if( 309 == syscallNum ){ syscallFuncName = "add_key" ; }
else if( 310 == syscallNum ){ syscallFuncName = "request_key" ; }
else if( 311 == syscallNum ){ syscallFuncName = "keyctl" ; }
else if( 312 == syscallNum ){ syscallFuncName = "semtimedop" ; }
else if( 313 == syscallNum ){ syscallFuncName = "vserver" ; }
else if( 314 == syscallNum ){ syscallFuncName = "ioprio_set" ; }
else if( 315 == syscallNum ){ syscallFuncName = "ioprio_get" ; }
else if( 316 == syscallNum ){ syscallFuncName = "inotify_init" ; }
else if( 317 == syscallNum ){ syscallFuncName = "inotify_add_watch" ; }
else if( 318 == syscallNum ){ syscallFuncName = "inotify_rm_watch" ; }
else if( 319 == syscallNum ){ syscallFuncName = "mbind" ; }
else if( 320 == syscallNum ){ syscallFuncName = "get_mempolicy" ; }
else if( 321 == syscallNum ){ syscallFuncName = "set_mempolicy" ; }
else if( 322 == syscallNum ){ syscallFuncName = "openat" ; }
else if( 323 == syscallNum ){ syscallFuncName = "mkdirat" ; }
else if( 324 == syscallNum ){ syscallFuncName = "mknodat" ; }
else if( 325 == syscallNum ){ syscallFuncName = "fchownat" ; }
else if( 326 == syscallNum ){ syscallFuncName = "futimesat" ; }
else if( 327 == syscallNum ){ syscallFuncName = "fstatat64" ; }
else if( 328 == syscallNum ){ syscallFuncName = "unlinkat" ; }
else if( 329 == syscallNum ){ syscallFuncName = "renameat" ; }
else if( 330 == syscallNum ){ syscallFuncName = "linkat" ; }
else if( 331 == syscallNum ){ syscallFuncName = "symlinkat" ; }
else if( 332 == syscallNum ){ syscallFuncName = "readlinkat" ; }
else if( 333 == syscallNum ){ syscallFuncName = "fchmodat" ; }
else if( 334 == syscallNum ){ syscallFuncName = "faccessat" ; }
else if( 335 == syscallNum ){ syscallFuncName = "pselect6" ; }
else if( 336 == syscallNum ){ syscallFuncName = "ppoll" ; }
else if( 337 == syscallNum ){ syscallFuncName = "unshare" ; }
else if( 338 == syscallNum ){ syscallFuncName = "set_robust_list" ; }
else if( 339 == syscallNum ){ syscallFuncName = "get_robust_list" ; }
else if( 340 == syscallNum ){ syscallFuncName = "splice" ; }
else if( 341 == syscallNum ){ syscallFuncName = "arm_sync_file_range" ; }
else if( 342 == syscallNum ){ syscallFuncName = "tee" ; }
else if( 343 == syscallNum ){ syscallFuncName = "vmsplice" ; }
else if( 344 == syscallNum ){ syscallFuncName = "move_pages" ; }
else if( 345 == syscallNum ){ syscallFuncName = "getcpu" ; }
else if( 346 == syscallNum ){ syscallFuncName = "epoll_pwait" ; }
else if( 347 == syscallNum ){ syscallFuncName = "kexec_load" ; }
else if( 348 == syscallNum ){ syscallFuncName = "utimensat" ; }
else if( 349 == syscallNum ){ syscallFuncName = "signalfd" ; }
else if( 350 == syscallNum ){ syscallFuncName = "timerfd_create" ; }
else if( 351 == syscallNum ){ syscallFuncName = "eventfd" ; }
else if( 352 == syscallNum ){ syscallFuncName = "fallocate" ; }
else if( 353 == syscallNum ){ syscallFuncName = "timerfd_settime" ; }
else if( 354 == syscallNum ){ syscallFuncName = "timerfd_gettime" ; }
else if( 355 == syscallNum ){ syscallFuncName = "signalfd4" ; }
else if( 356 == syscallNum ){ syscallFuncName = "eventfd2" ; }
else if( 357 == syscallNum ){ syscallFuncName = "epoll_create1" ; }
else if( 358 == syscallNum ){ syscallFuncName = "dup3" ; }
else if( 359 == syscallNum ){ syscallFuncName = "pipe2" ; }
else if( 360 == syscallNum ){ syscallFuncName = "inotify_init1" ; }
else if( 361 == syscallNum ){ syscallFuncName = "preadv" ; }
else if( 362 == syscallNum ){ syscallFuncName = "pwritev" ; }
else if( 363 == syscallNum ){ syscallFuncName = "rt_tgsigqueueinfo" ; }
else if( 364 == syscallNum ){ syscallFuncName = "perf_event_open" ; }
else if( 365 == syscallNum ){ syscallFuncName = "recvmmsg" ; }
else if( 366 == syscallNum ){ syscallFuncName = "accept4" ; }
else if( 367 == syscallNum ){ syscallFuncName = "fanotify_init" ; }
else if( 368 == syscallNum ){ syscallFuncName = "fanotify_mark" ; }
else if( 369 == syscallNum ){ syscallFuncName = "prlimit64" ; }
else if( 370 == syscallNum ){ syscallFuncName = "name_to_handle_at" ; }
else if( 371 == syscallNum ){ syscallFuncName = "open_by_handle_at" ; }
else if( 372 == syscallNum ){ syscallFuncName = "clock_adjtime" ; }
else if( 373 == syscallNum ){ syscallFuncName = "syncfs" ; }
else if( 374 == syscallNum ){ syscallFuncName = "sendmmsg" ; }
else if( 375 == syscallNum ){ syscallFuncName = "setns" ; }
else if( 376 == syscallNum ){ syscallFuncName = "process_vm_readv" ; }
else if( 377 == syscallNum ){ syscallFuncName = "process_vm_writev" ; }

	numStr = form("_%d", syscallNum);
	
	Message("%x : %d = %s\n", funcAddr, syscallNum, syscallFuncName);
	
	if("" == syscallFuncName){
		Message("**** %s(%x) : can't find matching syscall \n", Name(funcAddr), funcAddr);
		return;
	}
	
	if( -1 != LocByName(syscallFuncName) ){
		syscallFuncName = syscallFuncName + "_" + Name(funcAddr);
	}

	if(1 != MakeName(funcAddr, syscallFuncName)){
		Message("*** %s(%x) : make name failed \n", Name(funcAddr), funcAddr);
		return;
	}
	
}
static findSyscallNum(target_text, search_text){
	auto idx, syscallNum;
	
	syscallNum = -1;
	
	idx = strstr(target_text, search_text);
	
	if(-1==idx){
		return syscallNum;
	}
	syscallNum = xtol(substr(target_text, idx + strlen(search_text), -1));
	return syscallNum;
}

static instHandle(funcAddr, inst){
	auto text, count, targetText, idx, syscallNum;
	count = 0;
	idx = -1;
	targetText = "";
	syscallNum = -1;
	
	text = GetDisasm(inst);
	//Message("%x : %s\n", inst, text);
	if(text == "SVC     0" || text == "SVC             0"){
		
		//在8条指令以内搜索
		while(count<8 && inst > funcAddr){
			inst = FindCode(inst, SEARCH_UP | SEARCH_NEXT);
			if(-1 == inst){
				break;
			}
			text = GetDisasm(inst);
			
			syscallNum = findSyscallNum(text, "MOV     R7, #");
			if(-1 != syscallNum){
				break;
			}
			
			syscallNum = findSyscallNum(text, "LDR     R7, =");
			if(-1 != syscallNum){
				break;
			}
			
			syscallNum = findSyscallNum(text, "MOV             R7, #");
			if(-1 != syscallNum){
				break;
			}
			
			syscallNum = findSyscallNum(text, "LDR             R7, =");
			if(-1 != syscallNum){
				break;
			}
		}
		if(-1==syscallNum){
			Warning("can't find system call number : %s(%x)\n", Name(funcAddr), funcAddr);
		}else{  
			Message("targetText=%s, syscallNum=%d\n", Name(funcAddr), syscallNum);
			modifyFuncName(funcAddr, syscallNum);
		}
	}
}

static funcHandle(funcAddr){
	auto func, end, count, inst;
	func = GetFunctionAttr(funcAddr, FUNCATTR_START); 
	if(-1 != func){
		end = GetFunctionAttr(func, FUNCATTR_END);
		if(-1 != end){
			count = 0;
			inst = func;
			while(inst < end){
				count++;
				inst = FindCode(inst, SEARCH_DOWN | SEARCH_NEXT); 
				if( inst == -1) { break; }
				instHandle(func, inst);
			}
			//Message("%s contains %d instructions\n", Name(funcAddr), count);
		}else{
			Message("%s get func end fail\n", Name(funcAddr));
		}
	}else{
		Message("No function found at location %x\n", funcAddr);
	}
}

static main(){
	auto addr, end, args, locals, frame, firstArg, name, ret;
	
	Message("start my idc...\n");
	
	addr=0;
	for(addr=NextFunction(addr); addr != BADADDR; 
		addr = NextFunction(addr)){ 
		funcHandle(addr);
	}
	
	Message("end my idc...\n");
}