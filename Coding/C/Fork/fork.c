#include <stdio.h>
#include <unistd.h>
int main()
{
	pid_t ret_value;
	printf("\nThe process ID : %d\n",getpid());
	ret_value=fork();
	if(ret_value<0)
		printf("\nFork Failure\n");
	else if(ret_value==0)
	{
		printf("\nChild Process\n");
		printf("The process ID is %d\n",getpid());
		sleep(20);
	}
	else
	{
		wait();
		printf("\nParent Process\n");
		printf("The process ID is %d\n",getppid());
		sleep(20);
	}
	return 0;
}
