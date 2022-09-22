#include "main.h"

/**
 * _atoi - converts astring to an int
 * @s: string to be changed
 * Return: the converted int
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign * = -1;

		else
		(*s >= '0' && *s <= '9');

		num = num * 10 + (*s - '0');
		else if (num > 0)
			break;

	} while (*s++);
	return (num * sign);
}
