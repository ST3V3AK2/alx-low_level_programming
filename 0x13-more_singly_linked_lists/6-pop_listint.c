#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - removes the head node of a listint_t list
 * @head: pointer to linked list
 *
 * Return: data stored in the head node and 0 if there is no linked list
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (*head == NULL)
		return (0);
	temp = *head->next;
	num = *head->n
	free(*head);
	*head = temp;
	return (num);
}
