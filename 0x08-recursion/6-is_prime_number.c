#include "main.h"

/**
 * check_prime - checks if input is prime
 * @x: input number
 * @y: prime checker
 *
 * Return: on success, 1
 * else, 0
 */

int check_prime(int x, int y)
{
	if (x == y)
		return (1);
	if (x % y == 0)
		return (0);
	return (check_prime(x, y + 1));
}

/**
 * is_prime_number - checks if a number is a prime number
 * @n: input number
 *
 * Return: on success, 1
 * else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	check_prime(n, 2);
}
