#include "lists.h"

/**
 * free_listint - frees a "listint_t" list
 * @head: listint_t list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	nodePtr nextPtr;

	while (head != NULL)
	{
		nextPtr = head->next;
		free(head);
		head = nextPtr;
	}
}
