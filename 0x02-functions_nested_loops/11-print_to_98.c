#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prit all numbers to 98
 * @n: number to start from
 * Return: No return it's a void
 */

void print_to_98(int n)
{
if (n == 98)
	{
	printf("%d\n", n);
	}
if (n < 98)
{
for (; n <= 98 ; n++)
{
	if (n == 98)
{
	printf("%d", n);
continue;
}
printf("%d, ", n);
}
printf("\n");
}
else if (n > 98)
{
for (; n >= 98 ; n--)
{
	{
		if (n == 98)
		{
			printf("%d", n);
	continue;	}
	printf("%d, ", n);
}
}
printf("\n");
}
}
