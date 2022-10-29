#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* delete_nodeint_at_index - afunction tha deletes anode at agiven postion
* @head: head pointer
* @index: node to be deleted
*
* Return: 1if success, -1 if it fails
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *p;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		p = (*head)->next;
		free(*head);
		*head = p;
		return (1);
	}
	temp = *head;

	while (i < index - 1)
	{
		temp = temp->next;
		i++;
		if (temp->next == NULL)
		return (-1);
		temp = temp->next;
	}
	p = temp->next;
	temp->next = p->next;

	free(p);
	return (1);
}
