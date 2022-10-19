#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - prints anything
 * @format: format of the string
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list ap;/*ap - argument poiter*/
	char c, j, *str;
	int i;
	size_t counter = 0;
	float f;

	va_start(ap, format);
	while (format != NULL && counter < strlen(format))
	{
		j = *(format + counter);
		switch (j)
		{
			case 'c':
				c = va_arg(ap, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(ap, int);
				printf("%d", i);
				break;
			case 's':
				str = va_arg(ap, char*);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				break;
			case 'f':
				f = va_arg(ap, double);
				printf("%f", f);
				break;
		}
		if ((j == 'c' || j == 'i' || j == 's' || j == 'f')
				&& counter < strlen(format) - 1)
			printf(", ");
		counter++;
	}
	printf("\n");
}
