#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint - function that inserts anode at apostion
 * @head;:pointer to head
 * @idx: index
 * @n: int n
 * Returns: Address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current = *head
	unsigned int idx, int n;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = current;
		*head = new;
			return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
	if (current == NULL || current->next == NULL) return (NULL); current = current->next;
	}
		new->next = current->next;
		current->next = new;
	
	return (new);
}
