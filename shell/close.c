#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>


/**
 * main - return 0 if the p_w
 */

int main()
{
	int fd = open("access.c", O_RDONLY);

	int result = close (fd);

	if (result == 0)
	{
		printf("file access.c cose by success \n");
	}
	else if (result != 0)
	{
		printf("error occurred while close the file \n");
	}

	return (0);
}
