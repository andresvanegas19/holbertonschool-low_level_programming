#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: is the large of elements the array will be use
 * @size: is the size of each elemente in the array
 *
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pmemory = NULL;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pmemory = malloc(size * nmemb);
	if (pmemory == NULL)
	{
		free(pmemory);
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
		pmemory[i] = 0;

	return (pmemory);
}
