#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node to the beginning of a list
 * @head: pointer to pointer of the list
 * @str: pointer to string in the node
 *
 * Return: pointer to the new node and NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
