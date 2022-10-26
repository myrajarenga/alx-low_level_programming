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
	list_t *new; /* declare new node*/
	int len = 0; /* intialize len to 0 */
	list_t *tmp = *head; /*intialize list_t *tmp and equate it to  head pointer */

	new = malloc(sizeof(list_t));/* allocate memory */
	if (!new)
	{
		free(new);/* if memory of new node is NULL free it */
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	new->str = strdup(str);/* duplicate str */
	new->len = len;
	new->next = NULL;/*find out if next node is NULL */
	if (*head == NULL)
		*head = new;/* if pointer to the new node is null return new node */
	else
	{
		tmp = *head;/*allocate pointer to the last node */
		while (tmp->next != NULL)
			tmp = tmp->next; /* them tmp points to next node which is new and is the last node */
		tmp->next = new;
	}

	return (*head);
}
