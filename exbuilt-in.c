#include "shell.h"
/**
 * executeBuiltInCommands - This function executes built in commands
 * @tokens: accepts as parameter
 * @linee: accepts an argument
 *
 * Return: true(1) if we get a built in command else 0
 */
int executeBuiltInCommands(char **tokens, char *linee)
{
	int j = 0;
	char *listOfBuiltInCom[]={ "exit", "cd", "help", "env", NULL };

	while (listOfBuiltInCmds[j])
	{
		if (_strcmp(tokens[0], listOfBuiltInCom[j]) == 0)
		{
			switch (j)
			{
				case 0:
					_handle_exit(tokens, linee);
					break;
				case 1:
					chdir(tokens[1]);
					return (1);
				case 2:
					openHelp();
					return (1);
				case 3:
					_print_env();
					retun(1);
				default:
					break;
			}
		}
	j++
	}
	return (0);
}
