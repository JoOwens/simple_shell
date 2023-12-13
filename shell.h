#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

extern char **environ;

char **parse_line(char *line);
int execute_command(char *command, char **argv);
int _putchar(char ch);
void display_prompt(void);
void _puts(char *str);
size_t _strlen(const char *str);
void error_handler(const char *message);
void error_handler2(void);
int _strcmp(const char *str1, const char *str2);
void *custom_memcpy(void *dest, const void *src, size_t n);
void execute_child_process(char **argv);
int custom_atoi(const char *str);

#endif

