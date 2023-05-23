#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

/**
 * main - return the value 0 if P_W
 */

int main()
{
	pid_t pid = getpid();

	printf("process ID: %d\n", pid);

	return (0);
}
