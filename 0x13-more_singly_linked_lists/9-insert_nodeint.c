#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at index n in a listint_t list
 * head: input list
 * @idx: index of the node
 * @n: node data
 * Return: Address of the node at index and NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	for (i = 0; i < index; i++)
		*head = *head->next;
	if (i > index)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new;
	return (new_node);
}
