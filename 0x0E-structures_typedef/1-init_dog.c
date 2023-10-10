#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a struct dog .
 * @d: Pointer to the struct dog to initialize .
 * @name: Name of the dog to initialize .
 * @age: Age of the dog to initialize .
 * @owner: Owner of the dog to initialize .
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
