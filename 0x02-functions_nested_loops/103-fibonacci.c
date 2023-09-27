#include "main.h"

/**
 * main - prints the sum of even valued fibonnaci numbers below 4,000,000
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long int prev, crnt, tmp;
	float sum;
	int i;

	prev = 0;
	crnt = 1;

	for (i = 0; i <= 4000000; i++)
	{
		tmp = prev + crnt;
		if (tmp % 2 == 0)
			sum += tmp;
		prev = crnt;
		crnt = tmp;
	}
	printf("%.0f\n", sum);
	return (0);
}
