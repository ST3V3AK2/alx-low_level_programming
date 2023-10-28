#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @s: input string
 *
 * Return: on success, number of characters in s
 * on error, 0
 */

unsigned int _strlen(const char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		continue;

	return (i);
}

/**
 * _pow - compute x to the power of y
 * @x: input number
 * @y: power
 *
 * Return: on success, x ^ y
 * on error, 0
 */

int _pow(int x, int y)
{
	int i, p = 1;

	for (i = 0; i < y; i++)
		p *= x;

	return (p);
}

/**
 * binary_to_uint - converts a binary to  an unsigned int
 * @b: string containing a binary number
 *
 * Return: on success, the converted number
 * on error, 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i, j, bit;

	if (b == NULL)
		return (0);

	j = 0;
	for (i = _strlen(b) - 1; i >= 0; i--)
	{
		bit = b[i] -  48;
		if (bit != 0 && bit != 1)
			return (0);
		num += bit * (_pow(2, j));
		j++;
	}
	return (num);
}
