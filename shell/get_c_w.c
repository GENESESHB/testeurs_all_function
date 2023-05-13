#include <stdio.h>

/**
 * main - return return 1 if we have erreur - return 0 if the P-WORK
 * getc - it s the function return the string for well be the array
 */

int main(void)
{
	FILE *fp;
	char c;

	fp = fopen("input.text", "r");
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


/**
 * main - return 0 if the Prossess Wotk and  1 if the process faild
 * putw : it s the function with it s we can right the binari number
 */

int main(void)
{
	int n = 42;
	FILE *fp = fopen("file.bin", "wb");

	if (fp == NULL)
	{
		printf("error: cannot open file\n");
			return (1);
	}

	if (putw(n, fp) == EOF)
	{
		printf("error: cannot write to file\n");
		return (1);
	}

	fclose(fp);

	return (0);
}
