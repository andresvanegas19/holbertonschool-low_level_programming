#include "dog.h"
/**
 * init_dog -  initialize a variable of type struct dog
 * @d: struct the type of dog
 * @name: of the dog of the struct and is a char
 * @age: of the dog and is a float
 * @owner: of the dog and is a char
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
