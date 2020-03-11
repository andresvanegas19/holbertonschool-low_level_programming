#include <stdio.h>
/**
 * array_iterator - executes a function parameter on each element of an array.
 * @array: array of data
 * @size: the size of the array
 * @action: the function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
		for (i = 0; i < size; i++)
			(*action)(array[i]);
}
