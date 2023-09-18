#include "main.h"

/**
 * _strdup - creates a duplicate of input string
 * @str: input string
 *
 * Return: NULL if string is NULL or if malloc fails, pointer to the array otherwise
 */

char *_strdup(char *str)
{
	char *dup;
	int i, n;

	if (str == NULL)
		return (str);

	n = sizeof(str);
	dup = malloc(n);
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < n - 1; i ++)
		dup[i] = str[i];

	dup[n - 1] = '\0';
	return (dup);
}
