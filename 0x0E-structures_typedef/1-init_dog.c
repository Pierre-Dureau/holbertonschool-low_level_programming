#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialise a dog
 *
 * @d: The dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->age = age;
	d->name = name;
	d->owner = owner;
}
