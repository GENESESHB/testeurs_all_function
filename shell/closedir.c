#include <dirent.h>
#include <stdio.h>
#include <unistd.h>

/**
 * main - return the value 0 for success proccess
 */

int main(void)
{
	DIR* dir = opendir("/testeurs_all_function/shell");
	int result = closedir(dir);

	if (result == 0)
	{
		printf("close by success \n");
	}
	else if (result != 0)
	{
		printf("not closing am sorry \n");
	}

	return (0);
}
