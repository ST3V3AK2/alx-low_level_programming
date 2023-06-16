#include "main.h"

/**
 * _abs - compiles the absolute of a number
 * @n: number
 *
 * Return: absolute of n
 */

int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
