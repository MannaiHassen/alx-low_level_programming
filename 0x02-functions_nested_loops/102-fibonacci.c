#include <stdio.h>

/**
 * main - printing all firt 50 Fibonacci numbers
 * Return: always 0
 */
int main(void)
{
long int first, second, next;
int i;

first = 1;
second = 2;
printf("%ld, %ld, ", first, second);
for (i = 3; i <= 50; i++)
{
next = first + second;
if (i != 50)
{
printf("%ld, ", next);
}
else
{
printf("%ld\n", next);
}
first = second;
second = next;
}
return (0);
}
