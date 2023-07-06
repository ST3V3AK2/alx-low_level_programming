#include "lists.h"

/**
 * free_listint2 - frees all the elements of  listint_t list and assigns head to NULL
 * @head: input list
 *
 * Return: void
 */

void free_listint(listint_t **head)
{
	listint_t temp;

	while (*head != NULL)
	{
		temp = *head->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
