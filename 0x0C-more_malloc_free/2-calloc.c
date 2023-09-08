#include "main.h"

/**
 * _calloc - allocates memmory for an array initialized with 0
 * @nmemb: each item in an array
 * @size: size of the array
 *
 * Return: pointer to allocated memory and Null if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	new = malloc(nmemb * size);
	if (new == NULL)
		return (NULL);

	for (i = 0;  i < (nmemb *size); i++)
		new[i] = 0;

	return (new);
}
