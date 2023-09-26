#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of a linked list
 * @head: pointer to first node in the list (the listt)
 * @n: new data to be added to the list
 *
 * Return: address of the new element added or NUll on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	nodePtr new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
