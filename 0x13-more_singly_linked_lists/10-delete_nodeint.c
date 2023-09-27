#include "lists.h"

/**
 * delete_nodeint_at_index - finds a node at a particular index
 * @head: input list
 * @index: index of node
 *
 * Return: on success, pointer to a node at index
 * on error, -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	nodePtr prev_node, crnt_node, next_node;
	unsigned int i;

	if (!head || *head == NULL)
		return (-1);

	i = 0;
	crnt_node = *head;
	while (i < index)
	{
		if (crnt_node == NULL)
			return (-1);

		if (i == index - 1)
			prev_node = crnt_node;
		crnt_node = crnt_node->next;
		i++;
	}

	if (index ==  0)
	{
		*head = (*head)->next;
	}
	else
	{
		next_node = crnt_node->next;
		prev_node->next = next_node;
	}
	free(crnt_node);
	return (1);
}
