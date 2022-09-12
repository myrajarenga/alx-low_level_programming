#include <stdio.h>

/**
 *
 * main - prints all single digit numberz 
 * Description: "print characters bellow 10
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
