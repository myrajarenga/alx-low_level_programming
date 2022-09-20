#include "main.h"

/**
 * _puts - pronts astring follwed by anew line
 * to stdout
 * @str: parameter that contains a string
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
