#include "lists.h"

/**
 * print_list - print the elemnts of a linked list
 * @h: pointer to frst node in the list (the listt)
 *
 * Return: number of nodes in the linked list
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
