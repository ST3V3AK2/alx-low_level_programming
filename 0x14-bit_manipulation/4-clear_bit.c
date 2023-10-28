#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0
 * @n: input number
 * @index: index
 *
 * Return: on success, 1
 * on error, -1
 */

int clear_bit(unsigned long *n, unsigned int index)
{
	if (index > sizeof(unsigned long) * 8)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
