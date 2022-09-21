#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverse string value
 *
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int a;
	int b;
	int len;

	for (a = 0; a < len/ 2; a++)
	{
		b = *(s + a);
		*(s + a) = *(s + len - a - 1);
		*(s + len - a - 1) = b;

	}
}
