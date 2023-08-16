#include <stdio.h>

/**
 * main - printing the sum of febunacci numbers less than 4000000
 * Return: always 0
 */
int main(void)
{
	long int sum, first, second, next;

	sum = 0;
	first = 1;
	second = 2;
	while (second <= 4000000)
	{
		next = first + second;
		if ((next % 2) == 0)
		{
			sum = sum + next;
		}
	first = second;
	second = next;
	}
	printf("%ld\n", sum);

return (0);
}

