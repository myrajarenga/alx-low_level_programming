#include <stdarg.h>
#include <stdio.h>

/**
 * print_string - function that prints astring
 * @n: no of strings to print
 * @separator: string that separate arguments
 * Return: return void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if ((i != n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

