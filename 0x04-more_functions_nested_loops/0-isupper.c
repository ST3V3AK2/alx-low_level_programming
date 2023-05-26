#include "main.h"

/**
 * _isupper - checks if c is in uppercase
 * @c: input character
 *
 * Return: 1 for uppercase leyters and 0 for not.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
