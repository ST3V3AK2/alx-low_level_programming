#include "main.h"

/**
 * clear_bit - sets a particular bit to 0 at given index
 * @n: pointer to number
 * @index: index
 *
 * Return: on success, 1
 * on error, -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 0;
	unsigned int i, j, p;

	for (i = 0; i < index; i++)
	{
		if (i != index - 2)
		{
			p = 1;
			for (j = 0; j < i; j++)
				p *= 2;
			num += p;
		}
		else
		{
			n |= num;
		}
	}
	return (1);
}
