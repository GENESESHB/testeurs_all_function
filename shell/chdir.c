#include <unistd.h>
#include <stdio.h>

/**
 * main - return the value 0 if the proccess work
 */

int main()
{

	const char* path = "/home/zero_day";

	int res = chdir(path);

	if (res == 0)
	{
		printf("the derictory change by success \n");
	}
	else if (res != 0)
	{
		printf("error changing the directory \n");
	}

	return (0);
}
