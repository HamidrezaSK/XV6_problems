#include "types.h"
#include "stat.h"
#include "user.h"



int main(void)
{
	int rtime = 0;
	int wtime = 0;
	int rc = fork();  

	if (rc < 0) {
        exit();
    } else if (rc == 0) {
	    // uint temp = 0;

	    sleep(40);
	    for (int i = 0; i < 500; i++)
	    {
	      printf(1,"%s\n","fuck" );
	    }
	    exit();
    }
    int id =waitx(&wtime,&rtime);
	printf(1,"in the end this is pid %d and this is rtime: %d , wtime: %d\n",id,rtime,wtime);
	exit();
	return 0;
}