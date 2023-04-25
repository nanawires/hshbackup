#include "main.h"

/**
 * print_error - shows error message of a command
 * keyed in by a user when not found
 * @args: array pointer holding arguments being keyed in by user
 * @counter: counts number of times program executes
 *
 * Return: status of exit
 */

int print_error(char **args, int counter)
{
	char *interactive_mode = "hsh";
	char *non_intr_mode = "./hsh";

	if (isatty(STDIN_FILENO))
		write(2, interactive_mode, 3);

	else
		write(2, non_intr_mode, 5);

	write(2, ":", 2);
	perr_status(counter);
	write(2, ":", 2);
	write(2, args[0], strlen(args[0]));
	write(2, "command: not found\n", 19);

	return (127);
}
