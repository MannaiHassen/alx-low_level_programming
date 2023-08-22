#include "main.h"
#include <string.h>
/**
 * rev_string -  function that returns the inverse of a string
 * @s: a string
 * Return: It's a void
 */

void rev_string(char *s)
{
int length , i;
length = strlen(s);
char aux;
for (i = 0; i < length / 2; i++)
{
aux = s[i];
s[i] = s[length-i-1];
s[length - 1 - i] = aux;
}
}
