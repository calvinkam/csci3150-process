#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

int main(int argc,char *argv[])
{
	char *env[] = {"LS_COLORS=fi=04;33;44",NULL};
 	char *arg[] = {"ls","-l","--color",NULL};	
	printf("Using *execve* to exec ls -l\n");
	execve("/bin/ls",arg,env);
	printf("Program Terminated\n");

	return 0;
}	
