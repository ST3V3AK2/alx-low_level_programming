#include "lists.h"

/**
 * print_list - print the elemnts of a linked list
 * @h: pointer to frst node in the list (the listt)
 *
 * Return: number of nodes in the linked list
 */

size_t print_list(const list_t *h)
{
	char *null = "[0] (nil)";
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
			printf("%s\n", null);
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
