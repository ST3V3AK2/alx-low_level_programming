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

	n = strlen(str);
	dup = malloc(n + 1);
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		dup[i] = str[i];

	dup[n] = '\0';
	return (dup);
}
