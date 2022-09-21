#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverse string value
 *
 * @s: string to print
 */
void rev_string(char *s)
{
	int a;
	int b;

	for (a = 0; a < _strlen(s) / 2; a++)
	{
		b = s[a];
		s[a] = s[_strlen(s) - 1 - 1];
		s[_strlen(s) - 1 - 1] = b;

	}
}
