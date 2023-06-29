#include "main.h"

/**
 * is_prime - checks if input is a prime number
 * @n: input number
 * @i: divisor
 *
 * Return: 1 if is a prime number and 0 if not
 */

int is_prime(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime(n, i + 1));
}

/**
 * is_prime_number - checks if n is a prime number
 * @n: input number
 *
 * Return: 1 if n is a prime number and 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}
