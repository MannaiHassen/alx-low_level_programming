#include "main.h"

/**
* jack_bauer - This function print all minutes of a day
* Return: it's a void
*/
void jack_bauer(void)
{
int minute;
for (minute = 0; minute < 1440; minute++)
{
_putchar('0' + (minute / 60) / 10);
_putchar('0' + (minute / 60) % 10);
_putchar(':');
_putchar('0' + (minute % 60) / 10);
_putchar('0' + (minute % 60) % 10);
_putchar('\n');
}
}
