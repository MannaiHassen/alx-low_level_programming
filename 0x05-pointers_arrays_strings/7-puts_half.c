#include "main.h"
#include <string.h>
/**
 * puts_half - print second half of a string
 * @str: char array string type
 * Description: If odd number of chars, print (length - 1) / 2
 */

void puts_half(char *str)
{
	int length, i;

	length = strlen(str);
	for (i = (length + 1) / 2; i < length; i++)
	{
		_putchar(str[i]);

	}
	_putchar('\n');
}
