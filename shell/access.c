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
	if (access("/path/to/file", R_OK)== 0)
}
else
{

	perror("access");
}

return (0);
}

