#include "main.h"

/**
 * create_array - creates an array of character (c)
 * @size: size of the array
 * @c: input character
 *
 * Return: NULL if size = 0 and if malloc fails, pointer to the array otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned long int i;

	if (size <= 0)
		return (NULL);

	array = malloc(sizeof(c) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i ++)
		array[i] = c;

	array[i] = '\0';
	return (array);
}
