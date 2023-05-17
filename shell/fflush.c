#include <stdio.h>
#include <unistd.h>

/**
 * main - return 0 for success process
 */

int main()
{

	FILE *file = fopen("file.c", "w");
	
	fflush(file);

	fclose(file);
	return (0);
}
