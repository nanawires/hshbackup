#include "main.h"

/**
 * child_fork - creates a child proocess, executes it
 * and waits for it to complete
 * @args: Input array
 *
 * Return: 0 on success otherwise, -1 on failure
 */

int child_fork(char **args)
{
	pid_t pid = 0;
	int feedbk = 0, exe_feedbk = 0;

	pid = fork();

	if (pid == -1)
		child_fork("failed\n", 7);
	else if (pid == 0)
	{
		exe_feedbk = execve(args[0], args, environ);

		if (exe_feedbk == -1)
		{
			exe_feedbk = 126;
			perror("hsh");
			exit(exe_feedbk);
		}
		exit(0);
	}
	else
		wait(&stat);
	exe_feedbk = WEXITSTATUS(feedbk);
	return (exe_feedbk);
}
