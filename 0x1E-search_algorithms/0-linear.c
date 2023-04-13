#include "search_algos.h"

/**
 * linear_search - a function to perform linear search
 * @array: pointer to the first element
 * @size: size of the arrayi
 * @value: the value to search
 * Return: -1 on failure, the index on success
 */
 int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size ; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
} 
