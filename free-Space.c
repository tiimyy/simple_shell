#include "shell.h"

/**
 * free_environment_var(char *env_path)
 * @environment_path: the variable to be freed.
 */
void free_environment_var(char *environment_path)
{
	int i = 4;
	while (i >=0)
	{
		environment_path--;
		i--;
	}
	free(environment_path);
}


/**
 * free_token - frees an array of tokens
 * @tkns: the array of tokens to be free
 * Return: nothing to return.
 */
void free_token(char **tkns)
{
	char **tempp = tkns;

	if (tkns)
	{
		while(*tkns)
			free(*tkns++);

		free(tempp);
	}
}
