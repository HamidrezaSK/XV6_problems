#include "types.h"
#include "stat.h"
#include "user.h"

struct proc_info { 
int pid;
uint memsize;  
};
int main(void)
{  
	int process_count = 0;
	struct proc_info *p=malloc(25*sizeof(struct proc_info));
	printf(1,"fuck%p\n",&p);
	procinf(&p,&process_count);
	printf(1,"My first xv6 birthyear is %d\n",process_count);  
	printf(1,"My first xv6 birthyear is %p\n",&process_count);  
    exit();
}  
