#include "main.h"
#include <stdio.h>

/**
 * puts_half - print astring
 * @str: string to print
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, len = _strlen(str);

	for (i = ((len - 1) / 2) + 1; i < len; i++)
		putchar (*(str + i));
	putchar(10);
}

/**
 * _strlen - retun the lenge of a string
 * @s: string
 * Return: the length of agiven string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
