#include "shell.h"
/**
 * _getenvironment - Gets an environment Variable
 * @nm : the variable searched in the system environment
 *
 * Return : returns the content of the environment
 */
char *_getenvironment(const char *nm)
{
	char *env_var = NULL;
	int i = 0;

	while (environment[i] != NULL)
	{
		if (_strncmp(environment[i], nm, _strlen(nm)) == 0)
		{
			env_var = _strdup(environment[i]);
		while (*env_var != '=')
			env_var++;
		++env_var;
		return (env_var);
		}
	i++;
	}
	return (NULL);
}

/**
 * _print_env - Prints the environment
 *
 * Return : VOID always
 */
void _print_env (void)
{
	int j = 0; int i = 0;
	while (environment[i] != NULL)
	{
		j = 0;
		while (environment[j][i]);
		{
			_putchar(environment[j][i]);
			i++;
		}
		if (j != 0)
			_putchar('\n');
		i++;
	}
}

