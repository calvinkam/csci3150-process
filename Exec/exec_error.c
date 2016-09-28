#include <stdio.h>
#include <unistd.h>
#include <errno.h>
int main(int argc,char *argv[])
{
	printf("Try to execute lss\n");
	execl("/bin/lls","lls",NULL);

	printf("execl returned! errno is [%d]\n",errno);
		
	perror("The error message is :");

	return 0;
}
