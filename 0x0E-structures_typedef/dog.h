#ifndef HEADER_D
#define HEADER_D

#include <stdlib.h>
#include <string.h>

/**
 * struct dog - documentation for a dog
 * @name: dog's name
 * @owner: dog's owner's name
 * @age: dog's age
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
