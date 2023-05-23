#include <stdio.h>
#include <string.h>

/**
 * main - return the value 1 for faild proccess & value 0 for success proccess
 * _strtok: return the string for will be the array
 * @str[]: is the string in the array
 * @token: the variable with function and condition
 */

int main(void)
{
	char str[] = "hassan boudraa is, a ,teacher, , for ( lettle -  _  kids";
	char *token = strtok(str, ",");

	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, ",");
	}

	return (0);
}
