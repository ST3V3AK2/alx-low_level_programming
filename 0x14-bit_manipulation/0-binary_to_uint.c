#include "main.h"

/**
 * _pow2 - calculates 2 to the power of y
 * @y: input power
 *
 * Return: 2 ^ y
 */

unsigned int _pow2(int y)
{
	int i, sq;

	sq = 1;
	for (i = 0; i < y; i++)
		sq *= 2;
	return (sq);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: input string of binary numbers
 *
 * Return: on success, b in binary
 * on error, 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int base2 = 0;
	int n = 0, i;

	if (b == NULL)
		return (0);


	for (i = 0; i < strlen(b); i++)
	{
		if (b[i] != '0' || b[i] != '1')
			return (NULL);

		n = '0' - 30;
		base2 += n * _pow2(i);
	}
	return (base2);
}
