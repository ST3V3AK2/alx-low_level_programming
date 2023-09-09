#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum number in the array
 * @max: maximum number i  the array
 *
 * Return: pointer to allocated memory and Null if it fails
 */

int *array_range(int min, int max)
{
	int *new;
	long unsigned int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 2;
	new = malloc(sizeof(min) * size);
	if (new == NULL)
		return (NULL);

	for (i = 0;  i < sizeof(new) - 1; i++)
		new[i] = min + i;

	new[i] = '\0';
	return (new);
}
