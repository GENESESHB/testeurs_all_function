#include <stdlib.h>
#include <stdio.h>

/**
 * main - return 0 if the p_w
 */

int main()
{
	int *ptr = malloc(sizeof(int));
	//use the allocated memory
	
	free(ptr);
	//free the memory when no longer needed
	
	return (0);
}
