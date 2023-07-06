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

	n = strlen(s1) + strlen(s2) + 1;
	str = malloc(n);
	if (str == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (s1[j])
	{
		str[i] = s1[j];
		i++;
		j++;
	}

	j = 0;
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
