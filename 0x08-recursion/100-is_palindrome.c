#include "main.h"

/**
 * p_checker - checks if a string is a a palindrome
 * @s: input string
 * @i: index
 *
 * Return: on success, 1
 * else, 0
 */

int p_checker(char *s,  int i)
{
	int len = strlen(s);

	if (*s != *(s + len - i))
		return (0);
	if (len / 2 == i)
		return (1);
	return (p_checker(s + 1, c, i + 1));
}

/**
 * is_palindrome - calls p_checker
 * @s: input string
 *
 * Return: on success, 1
 * else, 0
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (p_checker(s, 1));
}
