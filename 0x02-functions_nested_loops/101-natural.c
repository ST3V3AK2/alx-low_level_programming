#include "main.h"

/**
 * main - sums the multiples of 3 and 5 under 1024
 *
 * Return: Always 0.
 */

int main(void)
{
	int sum, i;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 && i % 5 == 0 )
		{
			sum += i;
			continue;
		}
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
