#include "main.h"

/**
 * _strlen -  function that returns the length of a string
 * @s: a string
 * Return: length of the sting s
 */

int _strlen(char *s)
{
int i = 0;
while (*s != '\0')
{
s++;
i++;
}
return (i);
}
