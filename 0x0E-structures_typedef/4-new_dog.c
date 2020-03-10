#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * _strdup - fill a different pointer with a new informationi
 * @str: pointer to the new string
 *
 * Return: an pointer with a new space in the memory with data
 */
char *_strdup(char *str)
{
	char *pstr = NULL;
	int i = 0, j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	pstr = malloc(sizeof(char) * (i + 1));

	if (pstr == NULL)
		return (NULL);

	while (str[j])
	{
		pstr[j] = str[j];
		j++;
	}
	return (pstr);
}

/**
 * new_dog - create a new structure of the dog and save in the heap
 * @name: name's dog is a char
 * @age: age's dog is a float
 * @owner: owner's dog is a char
 *
 * Return: an structure of dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	return (new_dog);
}
