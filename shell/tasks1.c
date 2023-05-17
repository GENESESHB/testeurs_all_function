#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - return 0 for seccuss prossess
 * fgets: read the contant the input of user
 */

int main(void)
{
	char commande[100];

	while (printf("hassan-achor$ "))
	{
		if (fgets(commande, 100, stdin) == NULL)
		{
			printf("\n");
			exit(0);
		}

		int i;

		for (i = 0; commande[i] != '\n'; i++);

		commande[i] = '\0';

		if (access(commande, X_OK) != 0)
		{
			printf("%s: orili l botona nakh\n", commande);
		} else {
			system(commande);
		}
	}

	return (0);
}
