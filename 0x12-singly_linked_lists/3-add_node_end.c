#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node to the end of a list
 * @head: pointer to pointer of the list
 * @str: pointer to string in the node
 *
 * Return: pointer to the new node and NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t i;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;
		for (i = 0; last->next != NULL; i++)
			last = last->next;
		last->next = new;
	}
	return (new);
}
