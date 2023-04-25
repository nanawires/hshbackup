#include "main.h"

/**
 * inputs - array containing all keyed inputs
 * @str_input: string input
 * @args: input array keyed in by user
 *
 * Return: array length
 */

int inputs(char *str_input, char **args)
{
	int k = 0;
	char *options, *aux = str_input, *command;

	command = strtok(str_input, "\n\t\r ");
	args[k] = command;

	for (aux != NULL)
	{
		k++;
		options = strtok(NULL, "\n\t\r ");
		aux = options;
		args[k] = options;
	}

	args[k] = NULL;

	return (k);
}
