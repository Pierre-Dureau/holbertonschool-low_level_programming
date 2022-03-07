#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - Return the length of a string
 * @s: The string
 *
 * Return: The length of s
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strdup - copy of a string
 *
 * @str: The string
 *
 * Return: The string duplicated
 */

char *_strdup(char *str)
{
	int len, i;
	char *s;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);


	s = malloc((len + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		s[i] = str[i];
	s[i] = '\0';


	return (s);
}

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

	dog = malloc(sizeof(dog));
	if (dog == NULL)
		return (NULL);

	dog->name = _strdup(name);
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}
	dog->age = age;
	dog->owner = _strdup(owner);
	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
	}

	return (dog);
}
