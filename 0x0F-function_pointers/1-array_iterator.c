#include "function_pointers.h"

/**
 * array_iterator - performs a function for all the inputs of an array.
 * @array: input list
 * @size: size of the array
 * @action input function to be executed
 *
 * Return: Void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
