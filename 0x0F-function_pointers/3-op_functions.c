#include "3-calc.h"

/**
 * op_add - sums two integer
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - computes the difernce between  two integer
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - computes the product of two integer
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - computes the division two integer
 * @a: first integer
 * @b: second integer
 *
 * Return: division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder od the division of two integer
 * @a: first integer
 * @b: second integer
 *
 * Return: a mod b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
