#include <unistd.h>

/**
 * _putchar - writes the character cto stdout
 * @c: The chatacter to print
 *
 * Return: On success 1.
 * On error, -1 is returned and erron is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
