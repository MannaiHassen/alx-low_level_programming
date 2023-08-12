#include <stdio.h>
/**
*main - Entry point of the program
*Description: 'printing all the digits combo, using putchar twice maximum'
*Return: always 0
*/
int main(void)
{
int n;

for (n = 48 ; n < 58 ; n++)
{
putchar(n);
if (n == 57)
{
continue;
}
putchar(44);
putchar(32);
}
putchar('\n');
return (0);
}
