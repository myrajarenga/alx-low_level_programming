#include "main.h"

/**
 * _memcpy - copies a memory are
 * @dest: memory area to be copied to
 * @src: memory area to be copied ftom
 * @n: number of bytes to copy
 * Return: pointer to the copied meory block
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
