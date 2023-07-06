#ifndef HEADER_D
#define HEADER_D

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

/**
 * struct dog - registers a dog
 * @name: Dog's name
 * @age: Dog's ag
 * @owner: Dog's owner
 *
 * Description: briefly identifies a Dog.
 */

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
