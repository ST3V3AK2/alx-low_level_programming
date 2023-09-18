#include "main.h"
#include <stdio.h>

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
	long unsigned int i, j, size;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n > sizeof(s2) - 1)
		size = sizeof(s2) - 1;
	else
		size = n;

	size += sizeof(s1);
	printf("%ld\n", size);
	new = malloc(sizeof(char) * size);
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < sizeof(s1) - 1; i++)
	{
		new[i] = s1[i];
		printf("%c\n", new[i]);
	}

	for (j = 0; j < n; j++)
	{
		new[i + j] = s2[j];
		printf("%c, %c\n", new[i + j], s2[j]);
		i++;
	}

	printf("%s\n", new);
	new[i] = '\0';
	return (new);
}
