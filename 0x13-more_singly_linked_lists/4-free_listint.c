#include "lists.h"

/**
 * free_listint - frees all the elements of a listint_t list
 * @head: input list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
