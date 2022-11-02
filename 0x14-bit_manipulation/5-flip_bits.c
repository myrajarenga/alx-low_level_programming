#include "main.h"

/**
 * flip_bits - function that returns no of bits you need to flip
 * in order to get from one number to another.
 * @n:first  number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;

	unsigned long int x;
	unsigned long int e = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		x = e >> i;
		if (x & 1)
		count++;
	}
	return (count);
}
