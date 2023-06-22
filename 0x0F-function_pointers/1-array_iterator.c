#include "main.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: pointer to input array
 * @size: pointer to siz of the  input array
 * @action: input function
 * 
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
