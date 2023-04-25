#include "main.h"

/**
 * main - program that finds the maximum amongst multiple numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int x = 12, y = 15, z = 20;

	if (x > y && x > z)
		write(1, "The highest is 12", 22);

	else if (y > z && y > z)
		write(1, "The highest is 15", 23);

	else
		write(1, "The highest is 20", 23);
	write(1, "\n", 2);

	return (0);

}
