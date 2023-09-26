#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: pointer to linked list
 * @n: new data to be added to the list
 *
 * Return: pointer to the new element or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	nodePtr new, last;

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
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;

	}
	return (new);
}
