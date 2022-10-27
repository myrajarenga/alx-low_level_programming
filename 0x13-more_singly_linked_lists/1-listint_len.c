#include "lists.h"
#include <stdio.h>

/**
 * listint_len - prints number of eleents in alist
 * @h:pointet to head
 *
 * Return: no of elemnts
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
