#include "main.h"

/**
 * concat_string - combines string with paths
 * @str_path: path location of string
 * @command: command to be linked with str_path
 * Return: buffer to combined path
 */

char *concat_string(char *str_path, char *command)
{
	int k, l = 0, len1, len2;
	char *cmd_loc = NULL;

	if (str_path == NULL || command == NULL)
		return (NULL);

	len1 = _strlen(str_path);
	len2 = _strlen(command);
	cmd_loc = malloc(len1 + len2 + 2);

	if (cmd_loc == NULL)
		return (NULL);

	for (k = 0; str_path[k] != '\0'; k++)
	{
		cmd_loc[k] = str_path[k];
	}

	if (str_path[k - 1] != '/')
	{
		cmd_loc[k] = '/';
		k++;
	}
	while (command[l] != '\0')
	{
		cmd_loc[k + l] = command[l];
		l++;
	}
	cmd_loc[k + l] = '\0';
	return (cmd_loc);
}

