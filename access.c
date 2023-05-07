#include <unistd.h>
#include <stdio.h>
#include <errno.h>

/**
 * access - return 0 if appel de systeme  dans les systemes d exploitations.
 * @path: a pointer to null-termenated string
 * @R_OK: chek for read permission.
 */

int main(void)
{
	char *path;

	if (access("/path/to/file", R_OK) == 0)
	{
		printf("File can be read.\n");
	}
	else
	{
		perror("access");
	}
	return (0);
}
