#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given inde
 * @n:number to clear
 * @index:index
 * Return: 1on succes , -1 on fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
