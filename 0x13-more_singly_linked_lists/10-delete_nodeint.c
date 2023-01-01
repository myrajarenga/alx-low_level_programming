#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* delete_nodeint_at_index - afunction tha deletes anode at agiven postion
* @head: head pointer
* @index: node to be deleted
*
* Return: 1 on  success, -1 if it fails
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *ptr = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);


	if (index == 0)
	{
		*head = ptr->next;
		if (ptr->next == NULL)
			return (-1);
		ptr->next = NULL;
		free(ptr);
			return (1);
	}
	temp = *head;
	while (i < index - 1 )
	{
		temp = temp->next;
		i++;
	}
	ptr = temp->next;
	temp->next = ptr->next;
	free (ptr);
	return (1);
}
