#include "shell.h"

/**
*_puts - Print a string
* @str: The string to be printed
*
* This function prints a string to the standard output. If the string is not
* NULL, it iterates over each character of the string and calls the
*_putchar function to print it.
*
* Return: None
*/
void _puts(char *str)
{
if (str == NULL)
return;

while (*str != '\0')
{
_putchar(*str);
str++;
}
}

/**
*_putchar - Write a character to stdout
* @ch: The character to print
*
* This function writes a character to the standard output using the write
* system call. It returns 1 on success and -1 on error.
*
* Return: 1 on success, -1 on error
*/
int _putchar(char ch)
{
return (write(1, &ch, 1));
}

/**
*_strlen - Calculate the length of a string
* @str: The string whose length to calculate
*
* Calculates the length of a string by counting the number of
* characters until the null terminator '\0' is encountered. If the string is
* NULL, it returns 0.
*
* Return: Length of the string
*/

size_t _strlen(const char *str)
{
size_t len = 0;

if (str == NULL)
return (0);

while (str[len] != '\0')
{
len++;
}

return (len);
}

/**
*_strcmp - Compare two strings lexicographically
* @str1: The first strin variable
* @str2: The second string variable
*
* This function compares two strings lexicographically. It iterates over each
* character of the strings until a difference is found or the end of either
* string is reached. It returns an integer less than, equal to, or greater
* than zero if str1 is found to be less than, equal to, or greater than str2,
* respectively.
*
* Return: Integer less than, equal to, or greater than zero
*/

int _strcmp(const char *str1, const char *str2)
{
while (*str1 && *str2 && *str1 == *str2)
{
str1++;
str2++;
}

return (*str1 - *str2);
}
