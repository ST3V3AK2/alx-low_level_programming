#include "main.h"

/**
 * check_str - checks for a character in a string
 * @a: input string
 *
 * Return: on success, 1
 * on error, -1
 */

int check_str(char *str)
{
	long unsigned int i;

	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (-1);
	}
	return (1);
}

/**
 * main - prints product of two numbers
 * @argc: number of strings in argv
 * @argv: pointer to input strings
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int a, i, num;

	for (i = 1; i < argc; i++)
	{
		if (argc == 1)
			break;

		num = atoi(argv[i]);
		a = check_str(argv[i]);
		if ((num == 0 && argv[i][0] != '0') || a == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
