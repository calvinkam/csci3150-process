#include <stdio.h>
#include <unistd.h>

int main(int argc,char *argv[])
{	
	char *arg[] = {"ls","-l",NULL};
	printf("Using *execv* to exec ls -l...\n");
	execv("/bin/ls",arg);
	printf("Program Terminated\n");
	return 0;
}
