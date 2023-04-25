#include "main.h"

/**
 * global_var - global variable
 * @env_var: pointer to retrieve variable from environment
 *
 * Return: global variable pointer, NULL on failure
 */

char *global_var(char *env_var)
{
	int k = 0;
	const char cutter[] = "=";
	char *env_tok, *envdup, *env_tok_dup;

	if (global_var != NULL)
	{
		if (environ == NULL)
			return (NULL);
		envdup = _strdup(environ[k]);

		while (envdup != NULL)
		{
			env_tok = strtok(envdup, cutter);

			if (_strcmp(env_tok, global_var) == 0)
			{
				env_tok = strtok(NULL, cutter);
				env_tok_dup = _strdup(env_tok);
				free(envdup);
				return (env_tok_dup);
			}
			k++;
			free(envdup);
			envdup = _strdup(environ[k]);
		}
	}
	return (NULL);
}
