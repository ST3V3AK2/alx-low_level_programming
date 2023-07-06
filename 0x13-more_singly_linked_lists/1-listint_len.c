#include "lists.h"

/**
 * listint_len - computes the number of elements in a listint_t linked list
 * @h: pointer to input list
 *
 * Return: number of elements in h
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
