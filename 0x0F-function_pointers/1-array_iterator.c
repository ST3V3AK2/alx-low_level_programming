#include "function_pointers.h"

/**
 * array_iterator - performs a function for all the elements of an array.
 * @array: input list
 * @size: size of the array
 * @action input function to be executed
 *
 * Return: Void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if ((array == NULL || size < 1) || action == NULL)
		return;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
