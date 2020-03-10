#include "dog.h"
/**
 * free_dog - function that frees the structure dogs.
 * @d: the structure
 *
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
