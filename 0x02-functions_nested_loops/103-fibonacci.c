#include "main.h"

/**
 * main - prints the sum of even valued fibonnaci numbers below 4,000,000
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long int prev, crnt, tmp;
	unsigned long int sum;
	int i;

	prev = 1;
	crnt = 2;
	sum = crnt;

	for (i = 2; i < 4000000; i++)
	{
		tmp = prev + crnt;
		if (tmp % 2 == 0)
			sum += tmp;
		prev = crnt;
		crnt = tmp;
	}
	printf("%d\n", sum);
	putchar('\n');
	return (0);
}
