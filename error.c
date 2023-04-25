#include "main.h"

/**
 * perr_status - displays error feedback
 * @p: decimal to print
 *
 * Return: integer causing the error
 */

int perr_status(int p)
{
	unsigned int digit;
	int k = 0;

	if (p < 0)
	{
		digit = -p;
		k = k + _putchar('-');
	}
	else
		digit = p;

	if (digit / 10 != '\0')
		k = k + perr_status(digit / 10);

	k = k + _putchar(digit % 10 + '0');

	return (k);
}
