#include <stdio.h>
#include <stdlib.h>
/**
 *  _realloc - reallocates a memory block using
 * @ptr: is a pointer to the memory previously allocated
 * @old_size:  is the size, in bytes, of the allocated space
 * @new_size: in bytes of the new memory block
 *
 * Return: the new array with the size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (ptr);
	}
	else if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	else if (new_size > old_size)
	{
		free(ptr);
		ptr = malloc(new_size);

		return (ptr);
	}

	return (ptr);
}
