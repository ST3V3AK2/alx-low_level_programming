#include "main.h"

/**
 * main - prints the sum of even valued fibonnaci numbers below 4,000,000
 *
 * Return: Always 0.
 */

int main(void)
{
	int prev, crnt, tmp;
	unsigned int i, sum;

	prev = 1;
	crnt = 2;
	sum = crnt;
	printf("%d, %d", prev, crnt);

	for (i = 2; i < 4000000; i++)
	{
		tmp = prev + crnt;
		if (tmp % 2 == 0)
			sum += tmp;
		prev = crnt;
		crnt = tmp;
	}
	putchar('\n');
	return (0);
}
