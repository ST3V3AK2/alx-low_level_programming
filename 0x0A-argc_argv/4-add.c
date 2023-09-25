#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * check_str - checks for a character in a string
 * @a: input string
 *
 * Return: on success, 1
 * on error, -1
 */

int check_str(char *a)
{
	int i;

	for (i = 0; i < strlen(a); i++)
	{
		if (a[i] < '0' || a[i] > '9')
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
		if (num == 0 || a == -1 && argv[i][0] != '0')
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
