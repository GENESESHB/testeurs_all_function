#include <stdio.h>
#include <stdlib.h>

/**
 * main - return the value 0 if the process seccuss & 1 if the process not work
 */

int main(void)
{
	char *line = NULL;

	size_t bufsize = 0;
	ssize_t bytesRead = getline(&line, &bufsize, stdin);

	if (bytesRead == -1)
	{
		printf("ErroR\n");
	}
	else
	{
		printf("read line: %s", line);
	}

	free(line);
	
	return (0);
}
