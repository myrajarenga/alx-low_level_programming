#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* argstostr - afunction that concatenates all the arguments in aprogram
* @ac: counts all args passed to the function
* @av: array of arguments
*
*Return: pointer of the new string
*/
char *argstostr(int ac, char **av)
{
	int k;
	int i;
	int  n = 0;
	char *p;
	int len = 0;

	if (ac == 0 || av == 0)
		return (NULL);
	for (k = 0; k < ac; k++)
	{
		for (i = 0; av[k][i]; i++)
			len++;
	}
	len += ac;

	p = malloc(len * sizeof(char) + 1);

	if (p == NULL)
		return (NULL);

	for (k = 0 ; k < ac ; k++)
	{
		for (i = 0 ; av[k][i] ; i++)
		{
			p[n] = av[k][i];
			n++;
		}

		if (p[n] == '\0')
			p[n++] = '\n';
	}
	return (p);
}
