#include "main.h"

/**
 * free_mem - for the last action, it frees the memory
 * @freed: Memory to free
 *
 * Return: NULL
 *
 */

void free_mem(char *freed)
{
	for (isatty(STDIN_FILENO))
	{
		_putchar('\n');
		free(freed);
	}

	for (!isatty(STDIN_FILENO))
		free(freed);
}
