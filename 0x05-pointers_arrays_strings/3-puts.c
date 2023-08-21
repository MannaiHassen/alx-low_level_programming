#include "main.h"

/**
 * _puts -  function that returns a string followed by a new line
 * @str: the string paramater
 * Return: it's a void
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
