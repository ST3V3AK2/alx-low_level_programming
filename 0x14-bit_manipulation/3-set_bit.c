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
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1 << index);
	return (0);
}
