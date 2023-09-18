#include "main.h"

/**
 * str_concat - concatenates two stings and returns a pointer to the new string
 * @s1: input string1
 * @s2: input string2
 *
 * Return: NULL if malloc fails, pointer to the array otherwise
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	str = malloc(sizeof(s1) - 1 + sizeof(s2));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < sizeof(s1) - 1; i ++)
		str[i] = s1[i];
	for (j = 0; j < sizeof(s2); j++)
		str[i] = s2[j];

	str[i] = '\0';
	return (str);
}
