#include "main.h"

/**
 * get_bit - gets the value of the bit at a particular index of a number
 * @n: input number
 * @index: index
 *
 * Return: on success, value of the bit at index
 * on error, -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	if (n & (1 << index))
		return (1);
	return (0);
}
