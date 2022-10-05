#include "main.h"

/**
 * _memset - fills a memory block with a
 *  constant byte
 * @s: address to memeory block
 * @b: char to be used
 * @n: no of bytes to be used
 *
 * Return: pointer to the memory block
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
