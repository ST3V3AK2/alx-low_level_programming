#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: input character
 *
 * Return: 1 if c is a lowercase character and 0 if not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
