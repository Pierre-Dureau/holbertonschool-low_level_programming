#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Create a new dog
 *
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: The dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->age = age;
	dog->name = name;
	dog->owner = owner;
	return (dog);
}
