#include <stdio.h>

/**
 * main  -entry point
 *
 *Return: always returns 0
 *
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 99; a++)
	{
		putchar(a / 10 + '0');
		putchar(a % 10 + '0');
		putchar(' ');
		putchar(b / 10 + '0');
		putchar(b % 10 + '0');

		if (!(a == 98 && b == 99))
		{
			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');
return (0);

}

