#include "lists.h"

/**
* get_nodeint_at_index - function to get nth node
* @head:entry point
* @index: nth index
*
* Return:nth node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; (n < index) && (head->next); n++)
	head = head->next;

	if (n < index)
	return (NULL);

	return (head);
}
