#include "main.h"

/**
 * str_concat - creates a new string made up of two input string
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly created string
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	n = strlen(s1) + strlen(s2) + 1;
	str = malloc(sizeof(char) * n);
	if (str == NULL)
		return (NULL);

	i = 0;
	for (j = 0; s1[j] != NULL; i++, j++)
		str[i] = s1[j];

	for (j = 0; s2[j] != NULL; i++, j++)
		str[i] = s2[j];
	str[i] = '\0';
	return (str);
}
