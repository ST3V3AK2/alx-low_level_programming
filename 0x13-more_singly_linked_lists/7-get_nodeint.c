#include "main.h"

/**
 * get_nodeint_at_index - finds a node at a particular index
 * @head: input list
 * @index: index of node
 *
 * Return: on success, pointer to a node at index
 * on error, NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	nodePtr idx;
	unsigned int i;

	if (head == NULL || index < 0)
		return (NULL);

	i = 0;
	idx = head;
	while (i < index)
	{
		if (idx == NULL)
			return (NULL);
		idx = idx->next;
		i++;
	}
	return (idx);
}
