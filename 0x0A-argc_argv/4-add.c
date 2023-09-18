#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints product of two numbers
 * @argc: number of strings in argv
 * @argv: pointer to input strings
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char z[4];
	int sum = 0;
	int i, n;

	for (i = 1; i < argc; i++)
	{
		if (argc == 1)
			break;

		n = atoi(argv[i]);
		z = itoa(0, z, DECIMAL);
		printf("%d", *argv[i]);
		if (n == 0 && argv[i] != z)
		{
			printf("Error\n");
			return (1);
		}
		sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
