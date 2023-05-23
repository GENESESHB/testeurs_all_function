#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>

/**
 * cdir - return 0 for success prosses and 1 for faild process
 */

int cdir(char *path, char **args)
{
	char *old = getenv_var("OLDPWD");
	char *home = getenv_var("HOME");
	char pwd[PATH_MAX];

	if (args[1] == NULL)
	{
		if (chdir(home) != 0)
		{
			perror("cd");
			return (1);
		}
	}
	else if (strcmp(args[1], "-") == 0)
	{
		if (chdir(old) != 0)
		{
			perror("cd");
			return (1);
		}
	}
	else
	{
		if (chdir(path) != 0)
		{
			perror("cd");
			return (1);
		}
	}
	if (getcwd(pwd, sizeof(pwd)) != NULL)
	{
		setenv((char*[]){"setenv", "PWD", pwd, NULL});
	}
	else
	{
		perror("cd");
		return (1);
	}
	setenv((char*[]){"setenv", "OLDPWD", old, NULL});
	return (0);
}
