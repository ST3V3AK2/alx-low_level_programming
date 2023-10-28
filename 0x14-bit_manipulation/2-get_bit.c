#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: input number
 * @index: index
 *
 * Return: on success, value of bit at index
 * on error, -1
 */

int get_bit(unsigned long n, unsigned int index)
{
	int bit;

	if (index > sizeof(unsigned long) * 8)
		return (-1);

	bit = (1 << index) & n;
	if (bit > 0)
		return (1);
	return (0);
}
