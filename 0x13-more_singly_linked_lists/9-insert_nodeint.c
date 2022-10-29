#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts anode at apostion
 * @head:pointer to head
 * @idx: index
 * @n: int n
 * Return: Address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int node;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		current = *head;
		for (node = 0; node < idx - 1 && current != NULL; node++)
		current = current->next;
	}
	if (current  == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
			return (new);
	}

		new->next = current->next;
		current->next = new;
	return (new);
}
