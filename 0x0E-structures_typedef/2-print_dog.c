#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints contents of struct dog
 *@d:structure pointer
 *
 * Returns: void
 */
void print_dog(struct dog *d)
{
	if  (d != NULL)
	{
		if (d->name == NULL)
			printf("Owner: nil\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: nil\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
