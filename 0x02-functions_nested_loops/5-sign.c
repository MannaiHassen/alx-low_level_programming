#include "main.h"

/**
* print_sign - check if it's a positive or a negative digit
* @n : Digit to check
* Return: 1 if positive and 0 if 0 , -1 for negative
*/

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
