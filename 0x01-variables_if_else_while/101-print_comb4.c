#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always return 0
 *
 */
int main(void)
{
	int i = 0;
	int a;
	int b;
	int c;

	while (i <= 999)
	{
		a = (i / 100 + '0');
		b = (i / 10 + '0');
		c = (i % 10 + '0');

		if ((a < b) && (b < c))
		{
			putchar(a);
			putchar(b);
			putchar(c);

			if (i != 789)
			{
				putchar(',');
				putchar(' ');

			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
