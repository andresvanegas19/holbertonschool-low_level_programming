#include <stdio.h>
#include <stdio.h>

/**
 * print - it will print the value
 * @array:  is a pointer to the first element of the array to search in, and
 * will be sorted in ascending order
 * @init:  is init the array where start print
 * @end: is the last item will print
 */
void print(int *array, int init, int end)
{
	if (init != end)
	{
		printf("Searching in array: ");
		for (; init < end; init++)
		{
			printf("%d", array[init]);
			if (init + 1 != end)
				printf(", ");
		}

		printf("\n");
	}
}

/**
 * binary_search -  searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array:  is a pointer to the first element of the array to search in, and
 * will be sorted in ascending order
 * @left:  is the number of elements in array
 * @right:  is the number of elements in array
 * @value:  is the value to search for
 *
 * Return: the first index where value is located or
 * is not present in array or if array is NULL, the
 * function return -1
 */
int binary_search(int *array, int value, int left, int right)
{
	int partiton = 0;

	print(array, left, right);
	while (left <= right)
	{
		partiton = left + ((right - left) / 2);

		if (array[partiton] == value)
			return (partiton);

		if (array[partiton] < value)
			left = partiton + 1;
		else
			right = partiton - 1;

		print(array, left - 1, right);
	}

	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted
 * array of integers using the Exponential search algorithm
 * @array:  is a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value:  is the value to search for
 *
 * Return: the first index where value is located or
 * is not present in array or if array is NULL, the
 * function return -1
 */
int exponential_search(int *array, size_t size, int value)
{
	int range = 1, compare = 1, result = 0;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	while (range < (int)size && array[range] < value)
	{
		printf("Value checked array[%d] = [%d]\n", range, array[range]);
		range = range * 2, compare++;
	}

	if (range >= (int)size)
	{
		printf("Value found between indexes [%d] and [%ld]\n", range / 2, size - 1);
		result = binary_search(array, value, (range / 2), size);
	}
	else
	{
		printf("Value found between indexes [%d] and [%d]\n", range / 2, range);
		result = binary_search(array, value, (range / 2), range + 1);
	}

	if (result != -1)
		return (result);

	return (-1);
}
