#include "main.h"

/**
* _isalpha - check if it's a alphabetic char
* @c : Char to check
* Return: 1 if alphabetic char and 0 for another char
*/

int _isalpha(int c)
{
if ((c > 64 && c < 91) || (c > 96 && c < 123))
{
return (1);
}
return (0);
}
