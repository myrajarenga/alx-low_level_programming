#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 * Description: print Dor's quote
 * Return: Always 1 (success)
 */

int main(void)
{
	write(2, "and that pice 0f art is useful\" - Dor Korpar, 2015-10-19\n", 59);
	return (1);
}
