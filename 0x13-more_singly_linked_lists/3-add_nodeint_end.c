#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint_end - function that adds anew node at he end of alist
* @head: head pointer
* @n:number of node to be added
*
* Return:address of new elemnt or NULL if failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current = *head;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
        	return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
		
	}
	current->next = new;
	return (new);
}
