#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - assd a new node to the beginning of a listint_t linked list
 * @head: pointer to linked list
 * @n: value of new node
 *
 * Return: Address of the new element or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
