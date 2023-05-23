#include <stdio.h>
#include <unistd.h>

/**
 * main - return the value 0 for S_P
 * isatty - tests if the file descriptor refes to a terminal
 */

int main()
{
	int fd = STDIN_FILENO;
	//exemple file descriptor
	
	int result = isatty(fd);

	if (result == 1)
	{
		printf("File descriptor %d refers to a terminel\n", fd);
	}
	else
	{
		printf("file %d does not refer to a terminal\n", fd);
	}
	
	return (0);
}
