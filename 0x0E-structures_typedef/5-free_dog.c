#include <stdio.h>
#include "dog.h"

/**
 * free_dog - frees an instance of a struct dog
 * @d: pointer to dog struct
 *
 * Return: void
*/

void free_dog(dog_t *d)
{
	int i;

	for (i = 0; i < sizeof(d->name); i++)
		free(d->name[i]);
	for (i = 0; i < sizeof(d->owner); i++)
		free(d->owner[i]);
	free(d);
}
