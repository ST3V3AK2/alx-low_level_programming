#include "lists.h"

/**
 * free_listint2 - frees a "listint_t" list
 * @head: listint_t list
 *
 * Return: void
 */

void free_listinit2(listint_t **head)
{
	nodePtr nextPtr;

	if (!head)
		return;

	while (*head != NULL)
	{
		nextPtr = (*head)->next;
		free(*head);
		*head = nextPtr;
	}
}
