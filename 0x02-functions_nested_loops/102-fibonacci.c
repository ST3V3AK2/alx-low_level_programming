#include "main.h"

/**
 * main - prints the first 50 fibonnaci numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long int prev, crnt, tmp;
	int i;

	prev = 1;
	crnt = 2;
	printf("%ld, %ld, ", prev, crnt);

	for (i = 2; i < 50; i++)
	{
		tmp = prev + crnt;
		printf("%ld", tmp);
		if (i < 50 - 1)
			printf(", ");

		prev = crnt;
		crnt = tmp;
	}
	putchar('\n');
	return (0);
}
