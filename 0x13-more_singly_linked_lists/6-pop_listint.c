#include "lists.h"

/**
 * pop_listint - deletes the head of a linked list
 * @head: pointer to first node in the list (the listt)
 *
 * Return: address of the new element added or NUll on failure
 */

int pop_listint(listint_t **head)
{
	int tmp;
	nodePtr new;

	if (*head == NULL || !head)
		return (0);

	new = *head;
	*head = new->next;
	tmp = new->n;
	free(new);
	return (tmp);
}
