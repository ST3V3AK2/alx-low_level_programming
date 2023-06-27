#include "main.h"

/**
 * print_string - print strings
 * @str: pointer to character
 *
 * Return: Always 0 (Success)
 */

int print_string(char *str)
{
	int i;

	if (str == NULL)
		return (0);
	for(i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
