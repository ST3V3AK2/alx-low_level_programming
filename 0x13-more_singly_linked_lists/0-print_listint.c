#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: input list
 *
 * Return: number of nodes present
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		putchar('0' + h->n);
		h = h->next;
	}
	return (i);
}
