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
	unsigned int i, r;
	int idx;

	for (i = 0; i < index; i++)
	{
		if (n == 0)
			return (-1);

		n = n / 2;
		if (i == index - 1)
			idx = n % 2;
	}
	return (idx);
}
