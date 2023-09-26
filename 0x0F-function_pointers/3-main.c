#include "3-calc.h"

/**
 * main - checks code
 * @ac: number of arguments
 * @argv: pointer to the list of arguments
 *
 * Return: Always 0.
 */

int main(int ac, char *argv[])
{
	int num1, num2, result;
	int (*func)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = (*func)(num1, num2);
	printf("%d\n", result);
	return (0);
}
