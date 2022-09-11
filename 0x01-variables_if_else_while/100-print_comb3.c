#include <stdio.h>

/**
 * main - entry point 
 *
 * Return: always 0 
 *
 */

int main(void)
{
	int a;
	int b;

	for (a = 10; a <= 19; a++)
	{
		for (b = 10; b <= 19; b++)
		{
			if (a < b)
			{
				putchar(a);
				putchar(b);
				
				if (a != '8' || (a == '8' && b != '9'))
				{
					putchar(',');
					putchar(' ');
				}

			}

		}

	}
	putchar ('\n');
	return(0);
}

