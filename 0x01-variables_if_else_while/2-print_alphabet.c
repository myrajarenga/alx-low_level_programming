#include <stdio.h>
#include <unistd.h>
/**
 * main - entry
 * Description: prints alphabet in lowercase \n
 * Return: 0
 */
int main(void)
{
	char ch;
	for (ch = 'a' ; ch <= 'z'; ch++)
	{
		putchar (ch);
	}
	putchar('\n');
	return (0);
}
