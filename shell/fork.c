#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

/**
 * main - return 0 for succes process
 */

int main()
{
	pid_t pid = fork();

	if (pid > 0)
	{
		//parent process
	}
	else if (pid == 0)
	{
		//child process
	}
	else
	{
		//error occurred
	}
	return (0);
}
