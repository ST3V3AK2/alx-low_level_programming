#include "main.h"

/**
 * string_nconcat - concatenates two strings by n bytes
 * @s1: first input string
 * @s2: second input string
 * @n: number of bytes to be copied of s2
 *
 * Return: pointer to allocated memory and Null if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	int i, j, size;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n > sizeof(s2) - 1)
		size = sizeof(s2) - 1;
	else
		size = n;

	new = malloc(sizeof(s1) + size);
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < sizeof(s1) - 1; i++)
		new[i] = s1[i];

	for (j = 0; i < size; j++)
		new[i] = s2[j];

	new[i] = '\0';
	return (new);
}
