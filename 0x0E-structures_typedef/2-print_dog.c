#include <stdio.h>
#include "dog.h"
/**
 * init_dog -  initialize a variable of type struct dog
 * @d: struct the type of dog
 * @name: of the dog of the struct and is a char
 * @age: of the dog and is a float
 * @owner: of the dog and is a char
 *
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", (*d).name);


		if (d->age == 0)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", (*d).age);


		if (d->owner == NULL)
                        printf("Owner: (nil)\n");
                else
                        printf("Owner: %s\n", (*d).owner);
	}
}
