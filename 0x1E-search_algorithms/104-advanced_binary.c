#include <stdio.h>

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
	int partiton = 0, i = 0;

	if (left <= right)
	{
		partiton = (left + right) / 2;
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%d", array[i]);
			if (i + 1 != right)
				printf(", ");
		}

		printf("\n");

		if (array[partiton] == value)
			return (partiton);

		if (array[partiton] < value)
			return binary_search(array, value, partiton + 1, right);
		else
			return binary_search(array, value, left, partiton - 1);
	}

	return (-1);
}

/**
 * advanced_binary -  searches for a value in a sorted array of integers.
 * @array:  is a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value:  is the value to search for
 *
 * Return: the first index where value is located or
 * is not present in array or if array is NULL, the
 * function return -1
 */
int advanced_binary(int *array, size_t size, int value)
{

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	return binary_search(array, value, 0, (int)size);

	return (-1);
}
