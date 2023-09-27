#include "main.h"

/**
 * main - prints the first 98 fibonnaci numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long int prev, crnt, tmp;
	int i;

	prev = 1;
	crnt = 2;
	printf("%d, %d, ", prev, crnt);

	for (i = 2; i < 98; i++)
	{
		tmp = prev + crnt;
		printf("%ld", tmp);
		if (i < 98 - 1)
			printf(", ");

		prev = crnt;
		crnt = tmp;
	}
	putchar('\n');
	return (0);
}
