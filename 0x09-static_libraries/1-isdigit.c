#include "main.h"

/**
 * _isdigit- checks if c is a digit
 * @c: input character
 *
 * Return: 1 for digits and 0 for none digits.
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
