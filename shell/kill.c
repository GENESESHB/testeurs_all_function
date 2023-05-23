#include <stdio.h>
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>

/**
 * main -  return the value 0 for P_W
 * kill - sends a signal to a process
 */

int main()
{
	pid_t pid = getpid();
	//get the current process ID
	
	if (kill(pid, SIGTERM) == 0)
	{
		printf("Signal sent successfully\n");
	}
	else
	{
		perror("kill error");
		return (1);
	}

	return (0);
}
