#include "main.h"

/**
 * _strcat - concatenate astring pointed to by @ src
 * to the end of the sring pointed to by @dest
 * @dest: string to be appended
 * @src: string to be concatenated upon
 *
 * Return: returns pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];
	return (dest);
}
