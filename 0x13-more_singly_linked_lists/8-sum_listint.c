#include "lists.h"

/**
 * sum_listint - computes the sum of the data in a listint_t linked list
 * head: input list
 *
 * Return: sum of all the data in head and 0 if list is empty
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nth_node;
	unsigned int i;
	int sum;

	if (head == NULL)
		return (0);

	sum = 0;
	for (i = 0; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
