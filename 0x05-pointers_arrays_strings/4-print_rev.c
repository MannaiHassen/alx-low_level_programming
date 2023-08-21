#include "main.h"
#include <string.h>
/**
 * print_rev -  function that returns the inverse of a string
 * @s: a string
 * Return: It's a void
 */

void print_rev(char *s)
{
int i;
for (i = strlen(s); i > 0 ; i--)
{
_putchar(s[i]);

}
_putchar('\n');
}
