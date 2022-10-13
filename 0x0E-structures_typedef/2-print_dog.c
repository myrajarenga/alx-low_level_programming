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
		if (d->name != NULL)
			printf("Name: %s\n", d->name);

		else
			printf("Name: (nill)\n");
		printf("Age: %.6f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nill)\n");
	}
}
