#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
	printf("Before fork...\n");
	if(fork() == 0)
	{
		printf("Hello World!\n");
		exit(0);
	}
	sleep(1);
	printf("After fork...\n");
	return 0;
}
