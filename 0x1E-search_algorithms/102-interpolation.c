#include <stdio.h>

/**
 * interpolation_search - searches for a value in a sorted
 * array of integers using the Interpolation search algorithm
 * @array:  is a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value:  is the value to search for
 *
 * Return: the first index where value is located or
 * is not present in array or if array is NULL, the
 * function return -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1;
	size_t position = 0;

	if (array == NULL)
		return (-1);

	while (position < size)
	{
		position = low + (((double)(high - low) / (array[high] - array[low])) *
					   (value - array[low]));
		if (position > size)
		{
			printf("Value checked array[%ld] is out of range\n", position);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", position, array[position]);

		if (array[position] == value)
			return (position);
		else if (array[position] < value)
			low = position + 1;
		else
			high = position - 1;

	}

	return (-1);
}
