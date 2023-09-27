#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a particular index
 * @head: input list
 * @idx: index of node
 * @n: data for new node
 *
 * Return: on success, pointer to a node at index
 * on error, NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	nodePtr prev_node, crnt_node, new_node;
	unsigned int i;

	if ((!head || *head == NULL) && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	i = 0;
	crnt_node = *head;
	while (i < idx)
	{
		if (crnt_node == NULL)
			return (NULL);

		if (i == idx - 1)
			prev_node = crnt_node;
		crnt_node = crnt_node->next;
		i++;
	}

	new_node->n = n;
	new_node->next = crnt_node;
	if (idx == 0)
		*head = new_node;
	else
		prev_node->next = new_node;

	return (new_node);
}
