#include "lists.h"

/**
 * free_list - frees a "list_t" list
 * @head: list_t list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	nodePtr nextPtr;

	while (head != NULL)
	{
		nextPtr = head->next;
		free(head->str);
		free(head);
		head = nextPtr;
	}
}
