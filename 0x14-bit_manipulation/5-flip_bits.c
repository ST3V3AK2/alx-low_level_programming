#include "main.h"

/**
 * flip_bits - calculates the number of bits needed to flip a number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits needed to filp from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;

	i = 0;
	while ((n > 0) || (m > 0))
	{
		if (((n & 1) ^ (m & 1)) == 1)
			i++;
		n >>= 1;
		m >>= 1;
	}
	return (i);
}
