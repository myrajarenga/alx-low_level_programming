#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * Descriptiopn: print alphabet in lowercase ten times followed by anew line
 * 
 */
void print_alphabet_x10(void)
{

	char ch;
	int j;


	j = 0;

	while (j < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		j++;
	}
}

