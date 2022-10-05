#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - String concatenation
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to space in memory
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int a, b, len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	b = len1 = len2 = 0;
	len1 = strlen(s1);
	len2 = strlen(s2);
	len2++;

	p = malloc((sizeof(*s1) * len1) + (sizeof(*s2) * len2));
	if (p == NULL)
		return (NULL);
	for (a = 0; s1[a]; a++)
		p[b++] = s1[a];
	for (a = 0; s2[a]; a++)
		p[b++] = s2[a];
	p[len1 + len2] = '\0';
	return (p);
}
