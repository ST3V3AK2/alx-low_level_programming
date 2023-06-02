#include "main.h"

/**
 * _strncat - concatenates two strings for n bytes
 * @dest: pointer to destination string
 * @:src: pointer to source string
 * @n: number of bytes to be copied
 *
 * Return: a pointer to the dest srting
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j =  sizeof(dest) - 1;

	while (i < n && *(src + i) != '\0')
	{
		*(dest + j + i) = *(src + i);
		i++;
	}
	for ( ; i < n; i++)
		*(dest + i) = '\0';
	return (dest);
}
