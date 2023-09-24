#include "main.h"

/**
 * _pow_recursion - computes x raised to power y
 * @x: input value
 * @y: power
 *
 * Return: on sucesss, x to the power of y
 * on failure, -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return(x * _pow_recursion(x, y - 1));
}
