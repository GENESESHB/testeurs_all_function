#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


/**
 * main - return return 1 if we have erreur - return 0 if the P-WORK
 * getc - it s the function return the string for well be the array
 */

int main(void)
{
	FILE *fp;
	char c;

	fp = fopen("hassan boudraaa hhhhhhhhh", "r");
	if (fp == NULL)
	{
		printf("Error opening file\n");
		return (1);
	}

	while ((c = getc(fp)) != EOF)
	{
		printf("%c", c);
	}

	fclose(fp);

	return (0);
}
