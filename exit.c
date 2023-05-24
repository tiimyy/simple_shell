#include "shell.h"
/**
 *_hand_exit - handles all exit commands
 *@tokens: an array of strings representing the input token
 *@ln: the user input stringl=
 *Return: None
 */
void _hand_exit( char **tokens, char *line)
{
	int stat;
	
	if (tokens[1] == NULL || (!_strcmp(tokens[1], "0")))

		if (tokens[1} == NULL || (!_strcmp(tokens[1}, "0")))
{
	free_tokens(tokens);
	free(ln);
	exit(0);
}
stat = _atio(tokens[1]);
if (status != 0)
	{
		free_tokens(tokens);
		free(ln);
		exit(stat);
	}
	else
	{
		_puts("exit: Illegal number: ");
		_puts(tokens[1]);
		_puts("\n");
		exit(2);
	}
	free_tokens(tokens);
	free(ln);
	exit(EXIT_SUCCESS);
}

