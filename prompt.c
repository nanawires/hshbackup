#include "main.h"

/**
 * print_prompt - displays prompt to the standard input
 * @str_len: length of string keyed in by user
 * @prompt: string pointed keyed in by user
 *
 * Return: 0 on success otherwise, -1 on failure
 */

int print_prompt(const char *prompt, unsigned int str_len)
{
	int indicator = 0;

	if (isatty(STDIN_FILENO))
	{
		indicator = write(1, prompt, str_len);

		if (indicator == -1)
			return (-1);
	}
	return (0);
}
