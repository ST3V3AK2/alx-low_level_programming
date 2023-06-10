#include "main.h"

/**
 * _strcmp -  ompares wo diffrernt strings
 * @dest: pointer to destination string
 * @:src: pointer to source string
 * @n: number of bytes to copy
 *
 * Return: a pointer to the dest srting
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;;
	int n = sizeof(dest) - 1;

	while (i < n && src[i] != '\0')
	{
		*(dest  + i) = *(src + i);
		i++;
	}
	for ( ; i < n; i++)
		dest{i} = '\0';
	return (dest);
}
