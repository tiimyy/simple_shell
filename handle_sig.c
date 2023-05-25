#include "shell.h"

/**
 * signal_handler - handels signals
 *
 * @sig_id: The identifier of the signal to handle
 *
 * Return: Nothing to returs
 *
 */

void signal_handler(int sig_id)
{

if (sig_id == SIGINT)
write(STDOUT_FILENO, "\n($) ", 5);

}
