#include "lists.h"

/**
 * free_list - frees a linked list of type list_t
 * @h: linked list
 *
 * Return: void.
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
