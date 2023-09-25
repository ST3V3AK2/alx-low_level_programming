#include "main.h"

/**
 * count_words - checks the amount of words present in a string
 * @str: input string
 *
 * Return: on success, number of words in the string
 * on error, 0
 */

int count_words(char *str)
{
	int i, k = 0;

	if (str[0] != ' ')
		k++;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
				k++;
		}
	}
	return (k);
}

/**
 * strtow - splits a string into words
 * @str: input string
 *
 * Return: on success, pointer to a 2-D array of stringd
 * on error, NULL
 */

char **strtow(char *str)
{
	char **words;
	int i, j, wc = 0;

	if (str == NULL || str = "")
		return (NULL);

	wc = count_words(str);
	if (n == 1)
		return (NULL);

	words = malloc(sizeof(char *) * wc);
	if (words == NULL)
		return (NULL);

	i = 0
}
