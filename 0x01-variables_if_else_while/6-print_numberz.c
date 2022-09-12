#include <stdio.h>

/**
 * main - entry point
 * Descrption: print single digit numberz
 * Return: always 0 (success)
 *
 */

int main(void)
{
	int a = 0;

	for (; a < 10 ; a++)
	{
		putchar('0' + a);
	}
	putchar('\n');
	return (0);

}
