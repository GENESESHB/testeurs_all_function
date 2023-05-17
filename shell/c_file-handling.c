#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// c file handling 
// 1 . stream - oriented data files the  data is a stored in the same manner a s it appears on the screen
// 2 . system - oriented data files the data files are more closely associated with the os

// C fille operations
// creation of new file , opening , reading, writing data  in a file closing a file



// steps for proccessing a file 
// 1.declare a file pointer variable
// 2.open a file using fopen()
// 3.proccess the file using the suitable function
// 4.close the file using fclose()

/**
 * main - return 0 if the p_w
 */
int main(void)
{
	FILE *opf;
	opf = fopen("filename.txt", "W");
	//processing of the files
	
	fprintf(opf, "%s", "hello world");

	//end of processing
	
	fclose(opf);

	return (0);
}



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - return the value 0 for success process
 */

int main(void)
{
	FILE *filename;
	//pointer variable (1steps) for handling files in C
	
	char ch[100];
	filename = fopen("filename.txt", "r");
	printf("%s", fgets(ch, 50, filename));
	fclose(filename);
	return (0);
}


/**
 * "STRING>>>FUNCTION>>>>ARRAY"
*/
#include <stdio.h>
#include <string.h>

#define MAX_ARGS 10

/**
 * main - return the value 0 for success process
 *strtok - use strtok to split input into tokens separated by spaces
*/

int main(void)
{
	char input[100];
	scanf("%99[^\n]", input);

	char *token;
	char *args[MAX_ARGS];
	int num_args = 0;

	token = strtok(input, " ");
	while (token != NULL && num_args < MAX_ARGS)
	{
		args[num_args] = token;
		num_args++;
		token = strtok(NULL, " ");
	}

	printf("input tokens:\n");
	for (int i = 0; i < num_args; i++)
	{
		printf("%s\n",args[i]);
	}

	return (0);
}
