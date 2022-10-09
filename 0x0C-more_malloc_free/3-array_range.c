#include "main.h"
#include <stdlib.h>

/**
* array_range - function that creates an array of
* integers from min to max
* @min: minimun value
* @max: maximum value
* Return: pointer to the new created array
*/
int *array_range(int min, int max)
{
	int *p;
	int size;
	int i;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	p = malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{

		*(p + (i - min)) = i;
	}
	return (p);
}
