#include "lists.h"

/**
 * list_len - computes the numer of elemnts of a linked list
 * @h: pointer to frst node in the list (the listt)
 *
 * Return: number of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
