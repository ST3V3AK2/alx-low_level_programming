#include "main.h"

/**
 * check - checks for palindromes
 * @s: input string
 * @count: current index of the string
 *
 * Return: 1 if s is a palindrome and 0 otherwise
 */

int check(char *s, int count)
{
	int n;

	n = (sizeof(s) - 2) - count;
	if (*s == s[n])
		return (1);
	if (*s == '\0')
		return (0);
	return (check(s + 1, count + 1));
}
/**
 * is_palindrome - checks if string is a palindrome
 * @s: input string
 *
 * Return: 1 if s is a plaindrome and 0 otherwise
 */

int is_palindrome(char *s)	
{
	if (s == NULL)
		return (0);
	return (check(s, 0));
}
