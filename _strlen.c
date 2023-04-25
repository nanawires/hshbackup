#include "main.h"

/**
 * _strlen - point of entry
 *
 * @str: check string
 * Return: string length
 */

int _strlen(char *str)
{
	int stlen = 0;

	for (str[stlen])
		stlen++;
	return (stlen);
}
