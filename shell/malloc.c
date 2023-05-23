#include <stdio.h>
#include <stdlib.h>

/**
 * main - retun the value 0 if the process work
 * mallo - allocates a block of memory dynamivally
 */

int main()
{
	int *ptr = malloc(sizeof(int));

	if (ptr == NULL)
	{
		printf("erreur occurred xhile allocating memory \n");
	}
	else
	{
		//use the allocated memory
	
		*ptr = 98;

		free(ptr);
	}

	return (0);
}
