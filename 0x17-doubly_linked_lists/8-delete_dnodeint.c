#include "lists.h"
/**
 * delete_dnodeint_at_index - Delete node at nth
 * @head: Pointer to direction of the head
 * @index: The position in de ll
 * Return: 1 if it succeeded or -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *ptr = *head;
	unsigned int counter = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = ptr->next;
		if (ptr->next == NULL)
			return (-1);
		ptr->next->prev = NULL;
		free(ptr);
		return (1);
	}

	while (counter < index)
	{
		if (ptr->next == NULL)
			return (-1);
		ptr = ptr->next;
		counter++;
	}
	ptr->prev->next = ptr->next;
	if (ptr->next)
		ptr->next->prev = ptr->prev;
	if (ptr->next == NULL)
	{
		temp = ptr->prev;
		temp->next = NULL;
		free(ptr);
		return (1);
	}
	free(ptr);
	return (1);
}
