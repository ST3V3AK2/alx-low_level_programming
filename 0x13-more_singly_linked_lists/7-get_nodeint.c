#include "lists.h"

/**
 * get_nodeint_at_index - finds a node a t index n in a listint_t list
 * head: input list
 * @index: index of the node
 *
 * Return: Address of the node at index and NULL if failed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nth_node;
	unsigned int i;


	for (i = 0; i < index; i++)
		head = head->next;
	nth_node = head;
	return (nth_node);
}
