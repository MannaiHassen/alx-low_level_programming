#include <stdio.h>
/**
 * *main - Entry point of the program
 * *Description:'all numbers of base 16 in lowercase,putchar three times maximum'
 * *Return: always 0
 * */
int main(void)
{
int n = 48;
int m = 97;

while (n < 58)
{
putchar(n);
n++;
}
while (m < 103)
{
putchar(m);
m++;
}
putchar('\n');
return (0);
}
