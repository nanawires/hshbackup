#include "main.h"

/**
 * inbuilts - checks whether a keyed command is in-built
 * @args: pointer to the command arguments
 * @exit_status: end current status
 *
 * Return: 0 if inbuilt otherwise, -1 if not
 */

int inbuilts(char **args, int exit_status)
{
	char *builtins[2] = {"exit", "env"};

	int k = 0;

	while (k < 2)
	{
		if (strcmp(args[0], builtins[k]) == 0)
			break;
		k++;
	}
	if (k == 2)
		return (-1);
	if (strcmp(builtins[i], "exit") == 0)
	{
		free(args[0]);
		exit(exit_status);
	}
	if (strcmp(builtins[k], "env") == 0)
	{
		if (environ == NULL)
			return (0);
		write(1, environ, 1000);
	}
	return (0);
}
