#include "function_pointers.h"

/**
 * int_index - searches for the first element of an integer in an array
 * @array: input list
 * @size: size of the array
 * @cmp: compare function
 *
 * Return: on success, pointer to elements index
 * on error, -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, n;

	if ((array == NULL || size <= 0) || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		n = cmp(array[i]);
		if (n != 0)
			return (i);
	}
	return (-1);
}
