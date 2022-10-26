#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: if the function fails - NULL.
 *               Otherwise - the address of the new element.
 */

list_t *add_node(list_t **head, const char *str)
{

	int len = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (len = 0; str[len];)
		len++;
	new->str = strdup(str);/* new contains cpy of str */
	new->len = len; /*new also contains len */
	new->next = *head;/* made next new node as head */

	*head = new;/* head is now pointing to new */

	return (new);
}
