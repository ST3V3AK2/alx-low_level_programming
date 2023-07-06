#include "main.h"
#include <string.h>

/**
 * _strdup - creates a copy of the input string
 * @str: input string
 *
 * Return: pointer to newly created string
 */

char *_strdup(char *str)
{
	char *str_cp;
	int size, i;

	if (str == NULL)
		return (NULL);
	size = strlen(str) + 1;
	str_cp = malloc(sizeof(char) * size);
	if (str_cp == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str_cp[i] = str[i];
	return (str_cp);
}
