#include "main.h"

/**
* print_triangle - prints triangle stuff
* @size: integer to set triangle size
*/

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size < 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 0; i < size ; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(' ');
			}
			for (k = 0; k < i; k++)

			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

