#include "main.h"

/**
 * p_checker - checks if a string is a a palindrome
 * @s: input string
 * @c: character checker
 * @i: counter
 *
 * Return: on success, 1
 * else, 0
 */

int p_checker(char *s, char *c, int i)
{
	int len = strlen(s);

	c = *(s + len - i);
	if (*s != c)
		return (0);
	if (len / 2 == i)
		return (1);
	return(check_string(s + 1, c, i + 1));
}

/**
 * is_palindrome - p_checker
 * @s: input string
 *
 * Return: on success, 1
 * else, 0
 */
int is_palindrome(char *s)
{
	char *c;

	if (*s == '\0')
		return (1);
	p_checker(s, c, 1);
}
