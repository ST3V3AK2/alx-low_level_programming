#include "main.h"

/**
 * argstostr - concatenates all the arguments of ypur program
 * @ac: number of arguments
 * @av: 2-D pointer to arguments
 *
 * Return: on success, pointer to new string
 * on error, NULL
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k;
	unsigned long int len = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += strlen(av[i]) + 1;

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
