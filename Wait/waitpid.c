#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
	int pid;
	int status;

	if(!(pid = fork()))
	{
		printf("My PID: %d\n",getpid());
		//while(1);
		exit(0);
	}
	waitpid(pid,&status,WUNTRACED);

	if(WIFEXITED(status))
	{
		printf("Exit Normally\n");
		printf("Exit status: %d\n",WEXITSTATUS(status));
	}	
	else
	{
		printf("Exit NOT Normal\n");
	}
	return 0;
}
