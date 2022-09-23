#include "main.h"

/**
 * string_toupper - change all lwercase letters to uppercase *
 * @str: string to be changed
 * Return: address to the string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] >= 'Z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
