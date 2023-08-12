#include <stdio.h>
/**
*main - Entry point of the program
*Description: 'printing all the digits of base 10 from 0 to 9'
*Return: always 0
*/
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
