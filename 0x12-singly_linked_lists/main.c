#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	list_t *head;

	head = NULL;
	add_node_end(&head, "Alexandro");
	add_node_end(&head, "&");
	add_node_end(&head, "Kris");
	add_node_end(&head, "love");
	add_node_end(&head, "asm");
	print_list(head);
	free_list(head);
	head = NULL;
	return (0);
}
