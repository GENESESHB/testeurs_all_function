#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>


/**
 * main - return the value 0 if P_W
 * read - reads data from a file descriptor
 */

int main()
{
	int fd = open("read.c", O_RDONLY);

	if (fd == -1)
	{
		printf("ERROR occurred while opening the file \n");
	}
	else
	{
		char buffer[245];
		ssize_t bytesRead = read(fd, buffer, sizeof(buffer));
		if (bytesRead == -1)
		{
			printf("error occurred reading from the file\n");
		}
		else
		{
			printf("data read successfully %d\n", fd);
		}
		close(fd);
	}

	return (0);
}
