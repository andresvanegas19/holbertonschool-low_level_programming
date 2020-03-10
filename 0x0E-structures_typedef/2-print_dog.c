#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: struct the type of dog
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


		if (d->age == 00)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", (*d).age);


		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", (*d).owner);
	}
}