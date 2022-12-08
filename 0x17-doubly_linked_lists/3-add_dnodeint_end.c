#include "lists.h"
/**
 * add_dnodeint_end - Add a node in the end of lidt
 * @head: Pointer to direction of the head
 * @n: The data integer
 * Return: The addres of the new element or node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	new->prev = temp;

	return (new);
}
