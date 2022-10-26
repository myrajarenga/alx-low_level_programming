#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *       Otherwise - the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	int len = 0;
	list_t *tmp = *head;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}

	return (*head);
}
