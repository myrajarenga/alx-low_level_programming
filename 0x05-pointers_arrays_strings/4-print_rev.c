#include "main.h"

/**
 * print_rev - prints astring in reverse followed * by anew line to stdout
 * @s: parameter that contain astring
 * Return: void
 */
void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	for (count--; count >= 0; count--)
		_putchar(s[count]);

}
