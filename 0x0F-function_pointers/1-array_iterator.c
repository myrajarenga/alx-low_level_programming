#include "function_pointers.h"
#include <stddef.h>
/**
 *array_iterator - executes afunction given
 * as aparameter on each array
 * @array:integer of the array
 * @size: size of the array
 * @action: pointer of the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
