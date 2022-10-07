#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocate memory for an array
* @nmemb: number of elements
* @size:number of bits of each element
*
* Return: void pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);
	if (!array)
		return (NULL);
	for (i = 0; i < *(array); i++)
		array[i] = 0;
	return (array);
}
