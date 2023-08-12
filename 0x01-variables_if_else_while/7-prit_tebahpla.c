#include <stdio.h>
/**
*main - Entry point of the program
*Description: 'printing all the alphabet n inverse using putchar twice maximum'
*Return: always 0
*/
int main(void)
{
	int n = 123;

	while (n > 96)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
