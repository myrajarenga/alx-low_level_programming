#include "main.h"

/**
 * create_array - function that creates an array
 * of characters and intializes with aspecific character
 * @c: character to insert
 * @size: size of the array
 * Return: Null if size is zero or if it fails, pointer
 * the array if everything is normal
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) *size);

	if (array == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		*(array + i) = c;
	return (array);
}
