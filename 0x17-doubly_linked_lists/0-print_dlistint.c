#include "lists.h"

/**
 * print_dlistint - prints all elements od alinked list
 * @h: head pointer to list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{

	int counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}


