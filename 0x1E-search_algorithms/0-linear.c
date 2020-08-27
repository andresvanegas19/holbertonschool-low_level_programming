#include <stdio.h>

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 * @array:  is a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value:  is the value to search for
 *
 * Return: the first index where value is located or
 * is not present in array or if array is NULL, the
 * function return -1
 */
int linear_search(int *array, size_t size, int value)
{
	int num = 0;

	if (array == NULL)
		return (-1);

	for (; num < (int)size; num++)
	{
		printf("Value checked array[%d] = [%d]\n", num, array[num]);
		if (array[num] == value)
			return (num);
	}

	return (-1);
}
