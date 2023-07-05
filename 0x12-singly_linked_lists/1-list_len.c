#include "lists.h"

/**
 * list_len - computes the number of nodes in a linked list of type list_t
 * @h: linked list
 *
 * Return: number of elements in list h
 */

size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
