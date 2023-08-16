#include "main.h"

/**
* _print_last_digit - Returning the last digit of an integer
* @n: integer to get from it the last digit
* Return: The last digit of n
*/
int print_last_digit(int n)
{
int last_digit;
last_digit = n % 10;
if (last_digit < 0)
{
last_digit = last_digit * -1;
}
_putchar(last_digit + '0');
/**
 *the + '0' is to convert the digit to a char
 */
return (last_digit);
}
