#include "main.h"

/**
 * exe_path - checks if keyed command can be executed
 * @args: pointer for storing user entries
 *
 * Return: 0 on success otherwise, -1 on failure (command does not exist)
 */

int exe_path(char **args)
{
	char *global_path = NULL;
	char *global_dup = NULL;
	char *str_path = NULL;
	char *cmd_loc = NULL;
	char *test_cph[121];
	int exit_status = -1, k = 0;

	global_path = getenv("PATH");

	if (global_path == NULL)
		return (-1);
	free(global_path);

	while (exit_status == -1 && str_path != NULL)
	{
		cmd_loc = append_command(str_path, args[0]);
		test_cph[k] = cmd_loc;
		exit_status = check_file(test_cph[k]);
		str_path = strtok(NULL, ":");
		k++;
	}
	k--;
	free(global_dup);
	free_grid(test_cph, k);

	if (exit_status == 0)
	{
		args[0] = test_cph[k];
		return (0);
	}
	else
	{
		free(test_cph[k]);
		return (-1);
	}
}
