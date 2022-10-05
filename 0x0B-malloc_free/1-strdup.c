#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* _strdup - contains copy of string and returns apointer
* @str: string to  duplicate
* Return:returns pointer to astring
*/
char *_strdup(char *str)
{
	char *c;
	unsigned int length, i;

	if (str == NULL)
		return (NULL);

	i = length = 0;
	length = strlen(str);
	length++;

	c = malloc(sizeof(*str) * length);
	if (c == NULL)
	{
		return (NULL);
	}
	while (i <= length)
	{
		c[i] = str[i];
		i++;
	}
	return (c);
}
