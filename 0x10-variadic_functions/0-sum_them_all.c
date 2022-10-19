#include "variadic_functions.h"

/**
 * sum_them_all - sums all its parameters
 * @n:argument count
 * Return: return 0 if n === 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	unsigned int i, sum;

	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);

	va_end(ap);
	return (sum);


}
