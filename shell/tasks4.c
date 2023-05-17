#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * main - return 0 if seccess proccess & 1 for faild proccess
 */

int main(void)
{
	int i = 10;
	char commande[i];

	while (printf("hassan§"))
	{
		fgets(commande, i, stdin);
		commande[strcspn(commande, "\n")] = 0;

		if (strcmp(commande, "exit") == 0)
		{
			printf("quitte the shell...\n");
			exit(0);
		}
	}

	return (0);
}
