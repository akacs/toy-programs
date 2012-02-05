#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <kvm.h>
#include <paths.h>
#include <sys/param.h>
#include <sys/sysctl.h>
#include <sys/user.h>

int main(void) {
  kvm_t *kd;
  struct kinfo_proc *kp;
  char errbuf[256];
  char *foo, *bar;
  int nentries, what, flag, i;
 
  foo = bar = _PATH_DEVNULL;
  kd = kvm_openfiles(foo, bar, NULL, O_RDONLY, errbuf);
 
  what = KERN_PROC_ALL;
  flag = 0;
  nentries = -1;
  kp = kvm_getprocs(kd, what, flag, &nentries);
 
  printf("PID\tCOMMAND\n");
  for(i=nentries; --i>=0; ++kp){
    printf(" %d\t%s\n", kp->ki_pid, kp->ki_comm);
  }
  return 0;
}
