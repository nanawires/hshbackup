#include "main.h"

/**
 * _putchar - Outputs a character
 * @c: The character to output
 *
 * Return: 1 on success otherwise -1 on failure
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
