#include "main.h"

/**
 * main - simple shell program
 * @argc: integer showing argument number passed to shell
 * @argv: array pointer representing the arguments passed to shell
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	char user[COMMAND_LENGTH];
	(void) argc;
	(void) argv;

	while (1)
	{
		write(STDOUT_FILENO, "nanawires@Nana-Wires20:~/$ ", 28);

		if (fgets(user, COMMAND_LENGTH, stdin) == NULL)
		{
			write(STDOUT_FILENO, "\n", 1);
			exit(0);
		}
		user[strcspn(user, "\n")] = '\0';

		if (exec_cmd(user) == -1)
		{
			write(STDOUT_FILENO, "Error: Command Not found\n", 25);
		}
	}
	return (0);
}
