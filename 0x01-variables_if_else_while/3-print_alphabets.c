#include <stdio.h>
/**
*main - Entry point of the program
*Description:'alphabet in lowercase,uppercase,putchar three times maximum'
*Return: always 0
*/
int main(void)
{
	int n = 97;
	int m = 65;

	while (n < 123)
	{
		putchar(n);
		n++;
	}
	while (m < 91)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
