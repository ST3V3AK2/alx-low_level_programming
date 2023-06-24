#include "main.h"

/**
 * create_array - creates an array of chars initialized with a character
 * @size: size of array
 * @c: initialization character
 *
 * Return: pointer to newly created arrays
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	int i;

	if (size <= 0)
		return (NULL);

	str = malloc(sizeof(c) * size);
	for (i = 0; i < size; i++)
		str[i] = c;
	str[i] = NULL;
	return (str);
}
