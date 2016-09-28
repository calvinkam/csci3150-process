#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
	printf("$LS_COLORS: %s\n",getenv("LS_COLORS"));
	printf("$PATH: %s\n",getenv("PATH"));

	return 0;
}
