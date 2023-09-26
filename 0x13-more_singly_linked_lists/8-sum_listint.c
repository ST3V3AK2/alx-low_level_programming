#include "main.h"

/**
 * sum_listint - sums all the elements in a linked list
 * @head: ponter to linked list
 *
 * Return: on success, sum of elements in the list
 * on error, 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0, i;

	if (!head && head != NULL)
	{
		for (i = 0; *head != NULL; i++)
		{
			sum += (*head)->n;
			*head = (*head)->next;
		}
	}
	return (sum);
}
