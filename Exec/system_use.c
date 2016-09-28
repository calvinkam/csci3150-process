#include <stdio.h>
#include <stdlib.h>


int main(int argc,char *argv[])
{
	printf("Before calling system()..\n");
	system("ls -l");
	printf("After calling system()..\n");
	return 0;
}
