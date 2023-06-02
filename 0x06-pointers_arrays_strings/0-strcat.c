#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to destination string
 * @:src: pointer to source string
 *
 * Return: a pointer to the dest srting
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;;
	int n = sizeof(dest) - 1;

	while (i < sizeof(src))
	{
		*(dest + n + i) = *(src + i);
		i++;
	}
	return (dest);
}
