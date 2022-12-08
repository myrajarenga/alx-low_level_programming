#include "lists.h"
/**
 * sum_dlistint - Sum of the data (n)
 * @head: Pointer to the head
 * Return: The result of the sum if list is empty return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int add_data = 0;

	while (head != NULL)
	{
		add_data += head->n;
		head = head->next;
	}
	return (add_data);
}
