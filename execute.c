#include "shell.h"
/**
 * exc - this executes a command with options
 * @cm : the command to be executed
 * @comandOpts:the options flagss to the command
 *
 * Return : 0 on success, -1 on error
 */
int exc( char *cm, char **comandOpts)
{
	int checker;
	pid_t pid;

	switch (pid = fork())
	{
		case -1:
			perror ("failed fork")
				return (-1);
		case 0:
			execve(cm, comandOpts, environment);
			break;
		default:
			do {
				wait(pid, &checker, WUNTRACED);
			}while (WIFERXITED(check) == 0 && WIFSIGNALED(check) == 0);
	}
	return (0);
}

/**
 * *count_delimiters- Counts Delimeters in a string
 * @str : delimiters as arguments
 * @delims: the delimeters to will find in the string
 *
 * Return: The number of Delimetrs present;
 */
int count_delimiters(char *str, char *delims)
{
	int cwrd = 0, i, j;

	for (i = 0; delims[i]; i++)
	{
		for (j= 0; str[j]; j++)
		{
			if (str[j] == delims[i])
				cwrd++;
		}
	}
	return (cwrd)
}
