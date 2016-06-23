/*
 * Copyright 2014, NICTA
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(NICTA_BSD)
 */

#ifndef LIBSEL4MUSLCSYS_SYSCALLS_H_
#define LIBSEL4MUSLCSYS_SYSCALLS_H_

#include <stdarg.h>

/* prototype all the syscalls we implement */
long sys_set_thread_area(va_list ap);
long sys_set_tid_address(va_list ap);
long sys_sched_yield(va_list ap);
long sys_exit(va_list ap);
long sys_rt_sigprocmask(va_list ap);
long sys_gettid(va_list ap);
long sys_getpid(va_list ap);
long sys_getppid(va_list ap);
long sys_tgkill(va_list ap);
long sys_exit_group(va_list ap);
long sys_close(va_list ap);
long sys_read(va_list ap);
long sys_write(va_list ap);
long sys_ioctl(va_list ap);
long sys_prlimit64(va_list ap);
long sys_fcntl64(va_list ap);
long sys_brk(va_list ap);
long sys_madvise(va_list ap);
long sys_mmap2(va_list ap);
long sys_mmap(va_list ap);
long sys_mremap(va_list ap);
long sys_writev(va_list ap);
long sys_pause(va_list ap);
long sys_munmap(va_list ap);
long sys_clock_gettime(va_list ap);
long sys__newselect(va_list ap);
long sys_sigaction(va_list ap);
long sys_rt_sigaction(va_list ap);
long sys_socket(va_list ap);
long sys_bind(va_list ap);
long sys_connect(va_list ap);
long sys_listen(va_list ap);
long sys_accept(va_list ap);
long sys_setsockopt(va_list ap);
long sys_tkill(va_list ap);

#endif