#include "main.h"

/**
* _isupper - check if the c char is uppercase.
*
* Return: 1 if uppercase , 0 otherwise
*/
int _isupper(int c)
{
if (c > 64 && c < 91)
{
return (1);
}
else
return (0);
}
