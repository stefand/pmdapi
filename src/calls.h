#ifndef __CALLS_H
#define __CALLS_H

void do_pm_int_call32(struct sigcontext *scp, __dpmi_paddr *addr);
void do_pm_int_call16(struct sigcontext *scp, __dpmi_raddr *addr);
void do_rm_int(int inum, __dpmi_regs *regs);

#endif
