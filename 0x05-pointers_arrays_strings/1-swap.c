#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: an integer
 * @b: an integer
 * Return: It's a void
 */

void swap_int(int *a, int *b)
{
int aux;
aux = *a;
*a = *b;
*b = aux;
}
