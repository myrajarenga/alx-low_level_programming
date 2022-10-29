#include "lists.h"
#include <stdio.h>


/**
 * print_listint - prints all the elements of listint_t
 * @h:head pointer
 *
 * Return: number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{

		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
