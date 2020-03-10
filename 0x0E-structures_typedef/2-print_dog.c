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
		{
			d->name = "(nil)";
			printf("Name: %s\n", (*d).name);
		}
		else
			printf("Name: %s\n", (*d).name);


		if (d->age == 00)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", (*d).age);


		if (d->owner == NULL)
		{
			d->owner = "(nil)";
			printf("Owner: %s\n", (*d).owner);
		}
		else
			printf("Owner: %s\n", (*d).owner);
	}
}
