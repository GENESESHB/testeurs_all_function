#include <stdio.h>
#include <stdlib.h>

/**
 * main - return the value 0 if the process seccuss & 1 if the process not work
 */

int main(void)
{
	char *input = getline("hasssan entre the line: ");

	printf("dakhalti: %s\n", input);
	free(input);
	return (0);
}
