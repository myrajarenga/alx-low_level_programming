#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - a function that gets a length of string
 *
 * @str: the string to get the length
 *
 * Return: length of @str
 */
int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}
/**
 * _strcopy - a function that returns copy f string
 * @src: string to copy
 * @dest: copy string to here
 *
 * Return: @dest
 */
char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
/**
 *new_dog - afunction that creates anew dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *Return: struct pointer dog a
 *       NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	/* if name and owner are empty and age is less
	 * than zero return NULL */
	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);
	return (dog);
}
