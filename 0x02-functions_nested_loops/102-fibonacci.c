#include "main.h"

/**
 * main - prints the first 50 fibonnaci numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int prev, crnt, tmp;
	int i;

	prev = 1;
	crnt = 2;
	printf("%d, %d", prev, crnt);

	for (i = 2; i < 50; i++)
	{
		tmp = prev + crnt;
		printf("%d", tmp);
		if (i < 50 - 1)
			printf(", ");

		prev = crnt;
		crnt = tmp;
	}
	putchar('\n');
	return (0);
}
