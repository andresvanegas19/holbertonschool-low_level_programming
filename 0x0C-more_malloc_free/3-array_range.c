#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: the minmum of the array
 * @max: the maximum of the array
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *pi = NULL, size = 0, i, j = 0;

	if (min > max)
		return (NULL);

	size = ((max - min) + 1);

	pi = malloc(sizeof(int) * size);
	if (pi == NULL)
		return (NULL);

	for (i = 0, j = min; i < size; i++, j++)
	{
		pi[i] = j;
	}

	return (pi);
}
