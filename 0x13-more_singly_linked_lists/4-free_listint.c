#include "lists.h"
#include <stdlib.h>
/**
* free_listint - function that frees alist
* @head: pointer to the first node
* Return: Nothing
*/
void free_listint(listint_t *head)
{
	listint_t *temp;
	/* iterate through the list */
	/* at head free pointer (pointer to head node) */
	/* at head node (free datai pointed to by head node->next) */


	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

