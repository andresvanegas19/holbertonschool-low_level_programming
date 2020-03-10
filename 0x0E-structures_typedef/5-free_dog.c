#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function that frees the structure dogs.
 * @d: the structure of dog
 *
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
