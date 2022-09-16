#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - prints the last digit of anumber
 * @n: the int to extract last digit from
 *
 * Return: return value of last digit
 *
 */
int print_last_digit(int n)
{

	_putchar ('0' + _abs(n % 10));
	return (_abs(n % 10));

}
