#include <stdio.h>
/**
* main - the entry point of the program
* Description: 'this algorithm print all combinations of 2 dgits'
* Return: always 0
*/
int main(void)
{
	int i, j, k;

	for (i = 48; i <= 55; i++)
	{
		for (j = i + 1; j <= 56 ; j++)
	{
		for (k = j + 1; k <= 57 ; k++)
		{
			putchar(i);
			putchar(j);
			putchar(k);
			if (i == 55 && j == 56 && k == 57)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}}}
	putchar('\n');
	return (0);
}
