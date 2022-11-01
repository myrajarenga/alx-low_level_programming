#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: pointer to string
 *
 * Return: converted number or 0 if
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;

	if  (!b)
		return (0);

	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
		{
		val <<= 1;
		val += *b - '0';
		b++;
		}
		else
		return (0);
	}
	return (val);
}
