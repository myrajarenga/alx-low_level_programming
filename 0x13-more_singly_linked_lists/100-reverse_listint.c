#include "lists.h"
#include <stdlib.h>
/**
* reverse_listint - function that reverses alist in alinked list
* @head: head pointer
*
* Return: pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous,  *next;

	if (head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	previous = NULL;
	while (previous != NULL)
	{

		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;
	return (*head);
}
