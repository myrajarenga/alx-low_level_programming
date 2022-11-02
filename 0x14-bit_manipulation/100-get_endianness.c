#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 1 if little endian, 0 if big endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *endian = (char *) &x;

	if (*endian)
	return (1);
	return (0);
}
