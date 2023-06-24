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
	int i, j;
	int size_s1, size_s2;

	size_s1 = sizeof(s1) - 1;
	size_s2 = sizeof(s2);
	str = malloc(size_s1 + size_s2);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < size_s1; i++)
	{
		if (s1[i] == NULL)
		{
			i--;
			continue;
		}
		str[i] == s1[i];
	}

	j = 0;
	for ( ; i < size_s2; i++)
	{
		if (s2[j] == NULL)
		{
			i--;
			continue;
		}
		str[i] == s2[j];
	}
	str[i] == NULL;
	return (str);
}
