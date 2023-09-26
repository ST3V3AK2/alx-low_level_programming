#include "function_pointers.h"

/**
 * print_name - assigns a variable to a function using a pointer.
 * @name: the name to be printed
 * @f: function that prints names.
 *
 * Return: Void.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
