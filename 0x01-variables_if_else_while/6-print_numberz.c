#include <stdio.h>
/**
*main - Entry point of the program
*Description: 'printing all the digits using putchar twice maximum'
*Return: always 0
*/
int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
