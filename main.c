#include "main.h"

/**
 * cmd_int - acts as the command line interpreter
 * argc: integer representing argument number passed onto the shell
 * @argv: array pointer representing arguments passed onto the shell
 * @command: char pointer variable
 *
 * Return: 0 always
 */

int cmd_int(char *command)
{
	pid_t pid = fork();
	int response;

	if (pid == -1)
	{
		return (-1);
	}
	else if (pid == 0)
	{
		char *argv[] = {command, NULL};

		execvp(command, argv);
		perror("error");
		exit(EXIT_FAILURE);
	}
	else
	{
		waitpid(pid, &response, 0);

		if (WIFEXITED(response))
			return (WEXITSTATUS(response));
		else
			return (-1);
	}
}
