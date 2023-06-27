#include "main.h"

/**
 * prime_checker - checks if input is a prime number
 * @n: input number
 * @i: divisor
 *
 * Return: 1 if number is prime and 0 if not
 */

int prime_checker(int n, int i)
{
	if (n % i == 0 && n == i)
		return (1);
	else if (n % i == 0 && n > i)
		return (0)
	prime_checker(n, i + 1);
}

/**
 * is_prime_number - checks if input is a prime_number
 * @n: input number
 *
 * Return: Always 0 (Success)
 */

int is_prime_number(int n)
{
	return (prime_checker(n, 2));
}
