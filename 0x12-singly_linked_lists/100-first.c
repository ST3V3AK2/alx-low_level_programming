#include "lists.h"
void boot_up(void) __attribute__((constructor));
/**
 * boot_up - executes commands before main
 *
 * Return: Always 0.
 */

void boot_up(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
