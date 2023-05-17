#include <stdio.h>
#include <unistd.h>

/**
 * main - return the value 0 for succes process
 * execve - return -1 if the p_w
 */

extern char **environ;

int main(void)
{
	char *ary[] = { "/bin/ls", "-1", NULL };

	char **env = environ;

	if (execve("/bin/ls", ary, env) == -1)
	{
		perror("execve");
		return (1);
	}

	printf("this line will not be printed\n");

	return (0);
}
