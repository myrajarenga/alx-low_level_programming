#include <stdio.h>
#include <unistd.h>

/**
 *
 * main -Entry point
 * Description: prints Dor's quote
 * Return: Always 1 (success)
 */

int main(void)
{
	write(2, "and that pice 0f art is useful\" - Dor Korpar, 2015-10-19\n");
	return(1);
}
