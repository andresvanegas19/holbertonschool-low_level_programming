#include <stdio.h>
#include <stdlib.h>
/**
 *  _realloc - reallocates a memory block using
 * @ptr: is a pointer to the memory previously allocated
 * @old_size:  is the size, in bytes, of the allocated space
 * @new_size:  new size, in bytes of the new memory block
 *
 * Return: the new array with the size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pArrNew = NULL;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (ptr);
	}

	if (ptr == NULL)
	{
		pArrNew = malloc(new_size);

		if (pArrNew == NULL)
			return (NULL);

		return (pArrNew);
	}
	if (new_size > old_size)
	{
		free(ptr);
		pArrNew = malloc(new_size);
		if (pArrNew == NULL)
			return (NULL);
		return (pArrNew);
	}

	if (new_size < old_size)
	{
		pArrNew = malloc(new_size);

		if (pArrNew == NULL)
			return (NULL);

		for (i = 0; i < new_size; i++)
			*((char *)pArrNew + i) = *((char *)ptr + i);

		free(ptr);
	}


	return (pArrNew);
}
