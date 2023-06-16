#include "main.h"

/**
 * _isalpha - checks if c is a letter
 * @c: input
 *
 * Return: 1 if c is a letter and 0 if it isn't
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
