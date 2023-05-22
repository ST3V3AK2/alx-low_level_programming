#include <stdio.h>

/**
 * main - Prints digit from 0 to 9
 * n: single digit
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		n++;
	}
	putchar('\n');
	return (0);
}
