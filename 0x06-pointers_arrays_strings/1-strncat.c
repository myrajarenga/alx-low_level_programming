#include "main.h"

/**
 * _strncat - concatenate two strings but add inputed
 * number of bytes
 * @dest: string to be appended
 * @src: string to be completed at the end of dest
 * @n: integer paramter to compare index to
 * Return: returns new concatenated strin
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
