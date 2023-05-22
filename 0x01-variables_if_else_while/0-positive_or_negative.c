#include <stdio.h>
#include <time.h>

/**
 * main - Check the sign of a random number
 * n: random number
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		prinf("is positive");
	else if (n == 0)
		printf("is zero");
	else
		printf("is negative");
	return (0);
}
