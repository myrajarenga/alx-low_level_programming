#include "main.h"

/**
 * get_bit - function that returns value of abit at a given index
 * @index: index at which to check value of the bit
 * @n: number to check bits in
 * Return: value of the bit index or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return(-1);
	x = 1 << index;

	check = n & x;

	if (check == x)
		return (1);

	return (0);
}
