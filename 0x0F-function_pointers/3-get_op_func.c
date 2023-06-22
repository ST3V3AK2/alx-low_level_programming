#include "main.h"

/**
 * get_op_function - gets the function for the operation
 * @s: operand
 *
 * Return: pointer to operands function
 */

int (*get_op_func(char *s))(int, int)
{
	struct op op_t;
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	while (ops[i].op != NULL)
	{
		if (ops[i].op == s)
			return (ops[i].f);
	}
	return (NULL);
}
