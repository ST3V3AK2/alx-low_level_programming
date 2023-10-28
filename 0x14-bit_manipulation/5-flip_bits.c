#include "main.h"

/**
 * flip_bits - computes the number of bits needed to flip n to m
 * @n: first number
 * @m: second number
 *
 * Return: number of bits needed to flip n to m
 */

unsigned int flip_bits(unsigned long n, unsigned long int m)
{
	unsigned long int temp;
	unsigned int num_bits = 0;

	temp = n ^ m;
	while (temp)
	{
		if (temp & 1)
			num_bits++;
		temp >>= 1;
	}
	return (num_bits);
}
