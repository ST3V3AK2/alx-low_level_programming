#include "main.h"

/**
 * main - calculates the miniumm amount of coins needed to make change
 * @argc: number of arguments
 * @argv: pointer to input array of arguments
 *
 * Return: on error 1
 * if a negative number is passed, 0.
 */

int main(int argc, char *argv[])
{
	int cent[] = {25, 10, 5, 2, 1, 0};
	int i = 0, num, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	while (num > 0 && i < 5)
	{
		if (num >= cent[i])
		{
			num -= cent[i];
			change++;
		}
		else
		{
			i++;
		}
	}
	printf("%d\n", change);
	return (0);
}
