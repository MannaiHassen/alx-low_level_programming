#include <stdio.h>
/**
*main - Entry point of the program
*Description: 'printing all the alphabet using putchar twice maximum witht e,q'
*Return: always 0
*/
int main(void)
{
	int n = 97;

	while (n < 123)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
