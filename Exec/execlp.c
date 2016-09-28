#include <stdio.h>
#include <unistd.h>

int main(int argc,char *argv[])
{
	printf("Using *execlp* exec ls -l...\n");
	execlp("ls","ls","-l",NULL);
	printf("Program Terminated\n");
	return 0;
}
