#include "main.h"

/**
 * swap_int - swap integer values
 *
 * @a: first integer
 * @b: second integer
 * Return: 0
 */
void Swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
