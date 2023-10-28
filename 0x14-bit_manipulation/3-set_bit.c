#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: input number
 * @index: index
 *
 * Return: on success, 1
 * on error, -1
 */

int set_bit(unsigned long *n, unsigned int index)
{
	if (index > sizeof(unsigned long) * 8)
		return (-1);

	*n |= (1 << index);
	return (1);
}
