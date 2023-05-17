#include <unistd.h>
// for function access
#include <stdio.h>
// for function printf
#include <errno.h>
// for the variable errno


/**
 * access - return 0 if the proccess applent vi seccess
 *
 * @R_OK : verify the permission of reading
 * @path : the pointer of chain the caracter
*/

int main (void)
{
	const char* path = "/path/to/access.c";

	int resu = access(path, F_OK);

	if (resu == 0)
	{
		printf("the file access by success \n");
	}
	else if (resu != 0)
	{
		printf("file not access by success\n");
	

	return (0);
}
