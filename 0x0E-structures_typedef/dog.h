#ifndef HEADER_D
#define HEADER_D

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

#endif
