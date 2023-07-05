#include "lists.h"

/**
 * print_list - prints all the elements of the list
 * @h: linked list of numbers
 *
 * Return: number of noddes in list h
 */

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
