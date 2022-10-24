#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: always return 0
 *
 */
int main(void)
{
	int a = 48;
	int b;
	int c;
	int comma = 44;

	while (a <= 57)
	{
		b = a + 1;

		while (b <= 57)
		{
			c = b + 1;

			while  (c <= 57)
			{

				putchar(a);
				putchar(b);
				putchar(c);

				if (a != 55 || b != 56 || c != 57)
				{
					putchar(comma);
					putchar(32);
				}
				c += 1;
			}
			b += 1;
		}
		a += 1;
	}
	return (0);
}
