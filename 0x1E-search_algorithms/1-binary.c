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
	size_t  middle, i;

	size_t left = 0;

	size_t right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
            printf(" %d,", array[i]);
        }
			
        printf("%d\n ", array[i]);

        middle = (left + right) / 2;
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

	}
	return (-1);
}
