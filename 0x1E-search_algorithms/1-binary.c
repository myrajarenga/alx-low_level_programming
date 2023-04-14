#include "search_algos.h"

/**
* binary_search - a function to perform binary search
* @array: pointer to the first element
* @size: size of the array
* @value: the value to search
* Return: -1 on failure, the index on success
*/
int binary_search(int *array, size_t size, int value)
{
	int left, right, middle, i;

	left = 0;

	right = size - 1;
	middle = (left + right) / 2;

	if (array == NULL)
	{
		return (-1);
	}
	while (left <= right)
	{
		printf("Searching in the following array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d ", array[i]);
		}
		printf("\n");

		if (array[middle] < value)
		{
			left = middle + 1;
		}
		else if (array[middle] == value)
		{
			return (middle);
		}
		else
		{
			right = middle - 1;
		}
		middle = (left + right) / 2;
	}
	return (-1);
}
