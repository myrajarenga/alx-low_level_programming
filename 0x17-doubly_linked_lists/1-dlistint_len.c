#include "lists.h"
/**
 * dlistint_len - Return number of elements in a list
 * @h: Pointer to struct of  a list
 * Return: The amount of elements in linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
