#include <stdio.h>
#include <math.h>

/**
 * print - it will print the value
 * @array:  is a pointer to the first element of the array to search in, and
 * will be sorted in ascending order
 * @post:  is init the array where start print
 * @value: is for check which sentense print
 * @block: is the how the array is recorred
 */
void print(int *array, int post, int value, int block)
{
	if (value == 0)
		printf("Value checked array[%d] = [%d]\n", post, array[post]);
	else if (value == 1)
		printf("Value found between indexes [%d] and [%d]\n", post, post + block);
}

/**
 * jump_search -  searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array:  is a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value:  is the value to search for
 *
 * Return: the first index where value is located or
 * is not present in array or if array is NULL, the
 * function return -1
 */
int jump_search(int *array, size_t size, int value)
{
	int block = sqrt(size), i = 0, j = 0;

	if (array == NULL)
		return (-1);

	for (; i < (int)size; i += block)
	{
		/* TODO: "Value checked array" */
		print(array, i, 0, block);
		if (array[i + block] >= value)
		{
			/* TODO: "found between indexes" */
			print(array, i, 1, block);
			for (j = i; j <= i + block; j++)
			{
				/* TODO: "Value checked array" */
				print(array, j, 0, block);
				if (array[j] == value)
					return (j);
			}
			return (-1);
		}
	}

	return (-1);
}
