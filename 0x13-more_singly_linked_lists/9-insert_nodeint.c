#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts anode at apostion
 * @head:pointer to head
 * @idx: index
 * @n: int n
 * Return: Address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current; 
	unsigned int node;/* intialize unsigned int as node will be used to loop as you traverse on the list */

	if (head == NULL) /* check if head pointer is NUL */
		return (NULL);
	if (idx != 0)/* if stament checks if positon for the node to be insertrd is not equal to 0 */
	{
		current = *head;/* then head pointer is equal to current*/
		for (node = 0; node < idx - 1 && current != NULL; node++) /* use loop to traverse and add node until we get to position to insert node */
		current = current->next; /* the current poiter will point to next node */
	}
	if (current  == NULL) /* check if current pointer is NULL */
		return (NULL);

	new = malloc(sizeof(listint_t));/* allocate memorry for new node */
	if (new == NULL)/* check if new mode is NULL */
		return (NULL);

	new->n = n; /* now new can acces data in n */
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
			return (new);
	}

		new->next = current->next;
		current->next = new;
	return (new);
}
