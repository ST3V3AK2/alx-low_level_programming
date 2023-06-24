#include "main.h"

/**
 * int_index - searches for an integer
 * @array: pointer to input array
 * @size: pointer to siz of the  input array
 * @cmp: input function
 * 
 * Return: index of the element found
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, output;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			output = (*cmp)(array[i]);
			if (output != 1)
			{
				return (i);
			}
		}
	}
	return (-1);
}
