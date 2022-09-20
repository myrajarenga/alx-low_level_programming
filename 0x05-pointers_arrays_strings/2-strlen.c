#include "main.h"

/**
 *_strlen - prints the lenght of a string
 * @s: pointer to an array of characters
 *
 * Return: 0
 */
int _strlen(char *s)
{
	 int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
