#include "main.h"

/**
 * set_bit - function that sets valu of abit to 1 at agiven index
 * @n: number to use
 * @index: index of bit
 *
 * Return: 1 on succes -1 on fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	set = 1 << index;
	*n = *n | set;

	return (1);
}
