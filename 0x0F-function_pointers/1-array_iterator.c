#include <stdio.h>
/**
 * array_iterator - executes a function parameter on each element of an array.
 * @arry: array of data
 * @size: the size of the array
 * @action: the function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
