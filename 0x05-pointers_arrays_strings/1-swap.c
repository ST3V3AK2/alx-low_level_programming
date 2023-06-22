#include "main.h"

/**
 * swap_int - swaps two intgers
 * @a: pointer to first number
 * @b: pointer to second number
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}