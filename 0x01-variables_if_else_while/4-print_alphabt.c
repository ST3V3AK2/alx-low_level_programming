#include <stdio.h>

/**
 * main - Prints alphabets in lowercase except q and e
 * i: counter
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 'q' || i != 'e')
			putchar(i);
	}
	putchar('\n');
	return (0);
}
