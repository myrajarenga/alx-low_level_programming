#include "lists.h"
/**
 * print+dlistint - prints all elements od alinked list
 * @h: head pointer to list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	/**size_t n = 0;
	const dlistint_t *temp = h;

	if (h == NULL)
	{
		return (0);
	}
	while (temp)
	{
		printf("%d\n", temp->n);
		n++;
		temp = temp->next;
	}
	return (n);*/

	int counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}


