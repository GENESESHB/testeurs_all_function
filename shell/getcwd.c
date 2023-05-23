#include <unistd.h>
#include <stdio.h>
#include <limits.h>

/**
 * main - return 0 if the process Work
 */

int main()
{
	char buffer[PATH_MAX];

	char* result = getcwd(buffer, sizeof(buffer));

	if (result = NULL)
	{
		printf("ERROR \n");
	}
	else
	{
		printf("current working directory: %s\n", buffer);
	}

	return (0);
}
