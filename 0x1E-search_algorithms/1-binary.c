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
 * @size:  is the number of elements in array
 * @value:  is the value to search for
 *
 * Return: the first index where value is located or
 * is not present in array or if array is NULL, the
 * function return -1
 */
int binary_search(int *array, size_t size, int value)
{
	int partiton = 0, left = 0, right = size - 1;

	if (array == NULL)
		return (-1);

	print(array, left, size);
	while (left <= right)
	{
		partiton = left + ((right - left) / 2);

		if (array[partiton] == value)
			return (partiton);

		if (array[partiton] < value)
			left = partiton + 1;
		else
			right = partiton - 1;

		print(array, left, right + 1);
	}

	return (-1);
}
