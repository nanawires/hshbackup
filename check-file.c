#include "main.h"

/**
 * check_file - verifies the existence of a file
 * @pathname: path location to a file
 *
 * Return: 0 if found otherwise, -1 if not found
 */

int check_file(char *pathname)
{
	int exit_status;

	exit_status = (open(pathname, O_RDONLY));

	if (exit_status != -1)
	{
		close(exit_status);
		return (0);
	}
	else
		return (-1);
}
