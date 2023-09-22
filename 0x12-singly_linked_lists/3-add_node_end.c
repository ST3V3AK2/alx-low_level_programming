#include "lists.h"

/**
 * add_node_end - adds a node to the end of a linked list
 * @head: pointer to linked list
 * @str: new data to be added to the list
 *
 * Return; pointer to the new element or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	nodePtr new, last;

	new = malloc(sizeof(list_t));
	new->str = malloc(sizeof(str));
	if (new->str == NULL)
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
		while (last->next != NULL)
			last = last->next;
		last->next = new;

	}
	return (new);
}
