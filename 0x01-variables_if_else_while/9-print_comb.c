#include <stdio.h>

/**
 * main -entry point
 * Description: print number
 * Return: always return 0
 */
int main(void)
{
	int i;

	for (i = 10; i < 20; i++)
	{
		putchar(i);
		if (i != 19)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
