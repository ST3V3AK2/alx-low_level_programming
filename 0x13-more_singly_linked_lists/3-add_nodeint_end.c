#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node to the beginning of a listint_t linked list
 * @head: pointer to linked list
 * @n: value of new node
 *
 * Return: Address of the new element or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (*head->next != NULL)
			*head = *head->next;
		*head->next = new;
	}
	return (new);
}
