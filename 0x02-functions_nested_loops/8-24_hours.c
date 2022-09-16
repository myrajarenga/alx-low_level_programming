#include "main.h"

/**
 *i
 * jack_bauer - print every minute of the day of jack Bauer
 * strating from 00:00 to 23:59
 *
 */


void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar(i / 10 + '0');
			_putchar(i  % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j  % 10 + '0');
			_putchar('\n');
		}
	}

}
