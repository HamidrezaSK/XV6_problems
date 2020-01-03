#include "types.h"
#include "stat.h"
#include "user.h"



int main(void)
{
	int rc = fork();
	if(rc == 0)
	{
		int rc1 = fork();
		if(rc1 == 0)
		{
			int rc2 = fork();
			if(rc2 == 0)
			{
				sleep(100);
				printf(1,"lanat behet khodaE\n");
				int temp = 0;
				nice(1);
				while(temp<1000000000)
					temp++;
				exit();
			}
			else
			{
			sleep(90);
				nice(2);
				int temp = 0;
				while(temp<1000000000)
					temp++;
				wait();
				exit();

			}
		}
		else{
			sleep(90);
			nice(2);
			int temp = 0;
			while(temp<1000000000)
				temp++;
			exit();
		}
	}
	else
	{
		sleep(100);
		printf(1,"waiting for my childs\n");
		ps();
	exit();
		
	}
	printf(1,"end of the game \n");
	exit();
	return 0;
}