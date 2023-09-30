#include "main.h"

/**
 * set_bit - sets a particular bit to 1 at given index
 * @n: pointer to number
 * @index: index
 *
 * Return: on success, 1
 * on error, -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int i, j, k;
	size_t p;

	k = 1;
	p = 1;
	for (i = index; i >= 0; i--)
	{
		if (i != 0)
		{	p = 1;
			for (j = 0; j < k; j++)
				p *= 2;
			k++;
		}
		else
		{
			*n |= p;
		}
	}
	return (1);
}
