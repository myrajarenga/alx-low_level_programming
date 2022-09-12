#include <stdio.h>
#include <unistd.h>

/**
 *
 * main -print the string in the write function
 * Description: using the main function
 * this program prints " and that piece of art is useful\" - Dor's Korpar, 2015-10-19\"
 * Return: Always 1 (success)
 */

int main(void)
{
	write(2, "and that pice 0f art is useful\" - Dor Korpar, 2015-10-19\n");
	return(1);
}
