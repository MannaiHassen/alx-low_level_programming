#include <stdio.h>
/**
*main - Entry point of the program
*Description: 'printing all the digits combo, using putchar twice maximum'
*Return: always 0
*/
int main(void)
{
int n = 48;

while (n < 57)
{
putchar(n);
putchar(44);
putchar(32);
n++;
}
putchar(57);
return (0);
}
