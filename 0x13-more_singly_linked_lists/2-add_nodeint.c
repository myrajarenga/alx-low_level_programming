#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* add_nodeint - function that adds anode at the beginnig of alist
* @n: integer
* @head: head pointer
* Return: Address of the element or NULL if failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
