#include <stdio.h>
#include <unistd.h>

int main(int argc,char* argv[])
{
	printf("Using *execl* to exec ls -l...\n");
	execl("/bin/ls","/bin/ls","-l",NULL);
	printf("Program Terminated\n");
	return 0;
}
