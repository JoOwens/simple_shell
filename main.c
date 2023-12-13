#include "shell.h"

/**
* main - Entry point of the program.
* Return: Always 0.
*/

int main(void)
{
char *line = NULL;
ssize_t read_status;
size_t bf = 0;
char **argv = NULL;

while (1)
{
display_prompt();
read_status = getline(&line, &bf, stdin);
if (read_status == -1)
{
free(line);
exit(EXIT_SUCCESS);
}
else if (read_status == -2)
{
error_handler2();
continue;
}
else
{
line[read_status - 1] = '\0';
argv = parse_line(line);
if (argv[0] != NULL)
{
execute_command(argv[0], argv);
}
free(argv);
}
}

free(line);
return (0);
}
