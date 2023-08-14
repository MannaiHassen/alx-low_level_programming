#include <stdio.h>
/**
* main: the entry point of the program
* Description: this algorithm print all combinations of 2 dgits
* Return: always 0
*/
int main(void)
{
int i, j;
for (i = 48; i <57; i++)
{
for (j = i+1; j <=57 ; j++)
{
putchar(i);
putchar(j);
if (i == 56 && j ==57)
{
continue;
}
putchar(',');
if (i== 55 && j==57)
	continue;
putchar(' ');
}}
return (0);
}
