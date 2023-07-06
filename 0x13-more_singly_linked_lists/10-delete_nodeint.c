#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index n in a listint_t list
 * head: input list
 * @index: index of the node
 *
 * Return: 1 on suxess and -1 if failed
 */

listint_t *delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;


	if (*head == NULL || head == NULL)
		return (-1);
	for (i = 0; i < index; i++)
		*head = *head->next;
	if (i > index)
		return (-1);

	temp = *head->next;
	free(*head);
	*head = temp;
	return (-1);
}
