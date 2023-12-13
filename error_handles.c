#include "shell.h"

/**
* display_prompt - Displays the command prompt.
*
* Return: Nothing.
*/

void display_prompt(void)
{
/* Display the prompt */
if (isatty(STDIN_FILENO) == 1)
{
_puts(" $ ");
}
}

/**
* error_handler - Handles error conditions and exits.
* @message: The error message to display.
*
* Return: Nothing.
*/

void error_handler(const char *message)
{
perror(message);
exit(EXIT_FAILURE);
}

/**
* error_handler2 - Handles other error conditions.
*/

void error_handler2(void)
{
const char error_message[] = "Error: Line too long\n";
size_t message_len = _strlen(error_message) - 1;

write(STDERR_FILENO, error_message, message_len);
}
