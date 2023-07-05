#include "main.h"

/**
 * _stdrup - creates a copy of the input string
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

	size = sizeof(str);
	str_cp = malloc(size);
	for (i = 0; i < size; i++)
		str_cp[i] = str[i];
	str_cp[i] = '\0';
	return (str_cp);
}
