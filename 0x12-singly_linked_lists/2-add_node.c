#include "lists.h"

/**
 * add_node - adds a node to the beginning of a linked list
 * @head: pointer to frst node in the list (the listt)
 * @str: new data to be added to the list
 *
 * Return: address of the new element added or NUll on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	nodePtr new;

	new = malloc(sizeof(list_t));
	new->str = malloc(sizeof(str));
	if (new->str == NULL)
		return(NULL);
	new->str = strdup(str);
	new->len = strlen(new->str);
	new->next = *head;
	*head = new;
	return (new);
}
