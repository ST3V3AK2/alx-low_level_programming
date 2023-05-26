#include "main.h"
#include <stdio.h>

/**
 * main - check code
 *
 * Return: Always 0.
 */

int main(void)
{
	/*
	*print_line(2);
	*print_line(10);
	*print_line(1);
	*print_line(0);
	*print_line('!');
	*/
	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
