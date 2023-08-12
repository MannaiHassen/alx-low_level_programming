#include <stdio.h>
/**
*main - Entry point of the program
*Description: 'printing all the alphabet using putchar twice maximum'
*Return: always 0
*/
int main(void)
{
int n = 97;

while (n < 123)
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}
