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
	unsigned int i, j, p;

	for (i = 0; i < index; i++)
	{
		if (i != index - 1)
		{
			p = 1;
			for (j = 0; j < i; j++)
				p *= 2;
		}
		else
		{
			n |= p;
		}
	}
	return (1);
}
