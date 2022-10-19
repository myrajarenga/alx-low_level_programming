#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - unction that prints numbers
 * @n: number of integer passed
 * @separator: the string to be separated between nos
 * Return: Return 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int num;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		printf("%d", num);

	if (i < n - 1 && separator)
		printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

