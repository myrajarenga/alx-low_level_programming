#include "lists.h"
#include <stdlib.h>

/**
* pop_listint - function that deletes head node
* @head: head pointer
*
* Return: 0 if the link is empty
*/
int pop_listint(listint_t **head)
{
	int temp;
	listint_t *str;

	str = *head;

	if (str == NULL)
		return (0);

	*head = (*head)->next;
	temp = str->n;
	free(str);

	return (temp);


}
