#include "main.h"

/**
 * _strncpy - C function that copies astring including
 * the terminating null byte, using an impu number of bytes
 * if the length of the source sring is less than maximum
 * number of bytes.
 * @dest: buffer storing string copy
 * @src: the source string
 * @n: maximum number of bytes copied
 * Return: returns dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
