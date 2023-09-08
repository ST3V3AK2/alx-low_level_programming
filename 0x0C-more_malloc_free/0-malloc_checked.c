#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of new memeory
 *
 * Return: pointer to allocated memory and 98 if malloc fails.
 */

void *malloc_checked(unsigned int b)
{
	void *new;

	new = malloc(b);
	if (new == NULL)
		exit(98);
	return (new);
}
