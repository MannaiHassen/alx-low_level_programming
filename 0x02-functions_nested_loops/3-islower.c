#include "main.h"

/**
* _islower - check if it's a lowercase char
* @c : Char to check
* Return : 1 if lowercase and 0 for another char
*/

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
		return (0);
}
