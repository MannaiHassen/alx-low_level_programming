#include <stdio.h>

/**
 * main - compute the sum of all the
 * multiples of 3 or 5 below 1024
 * Return: always 0
 */
int main(void)
{
	int sum, i;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
		sum = sum + i;
		}
		else if ((i % 5) == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
