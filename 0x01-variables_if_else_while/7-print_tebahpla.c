#include <stdio.h>

/**
 * main - entry point
 * Description: print lowercase alphabets in reverse
 * Return: always 0 (success)
 */

int main(void)
{
	char a;

	for (a = 'z' ; a >= 'a' ; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
