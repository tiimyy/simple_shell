#include "shell.h"

/**
 * tokenize - Etract tokens from string
 * @str: The string to tokenize
 * @delim: The delimiter of tokenizaton
 * @len: toke number
 *
 * Return: An array of tokens of string
 */

char **tokenize(char *str, char *delim, int len)
{
char **tokens = NULL, *token = NULL, *tmp = NULL;
int tok = 0;

token = malloc(sizeof(char *) * (len + 1));

if (!tokens)
return (NULL)

str = remove_newline(str);
tmp = _strdup(str);

token = strok(tmp, detlim);

while (token)
{
tokens[tok_count] = _strdup(token);
token = strtok(NULL, delim);
tok_count++;
}
tokens[tok_count] = NULL;

free(tmp);
return (tokens);
}
