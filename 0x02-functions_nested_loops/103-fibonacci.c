#include <stdio.h>

/**
 * main - printing all firt 50 Fibonacci numbers
 * Return: always 0
 */
int main(void)
{
	long int first, second, next, nextPlus;
	int i;

	first = 1;
	second = 2;
	nextPlus = 3;
	next = 3;
	printf("%ld,  ", second);
	for (i = 3; next <= 4000000; i++)
	{
		next = first + second;
		if (nextPlus <= 4000000)
		{
			if ((next % 2) == 0)
			{
			printf("%ld, ", next);
			}
		}
		else
		{
			if ((next % 2) == 0)
			{
			printf("%ld\n", next);
		}
		first = second;
		second = next;
		nextPlus = next + second;
	}
}
return (0);
}

