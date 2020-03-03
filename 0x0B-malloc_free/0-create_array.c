#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: is the size of the array
 * @c: char it will fill the array
 *
 * Return: the array.
 */

char *create_array(unsigned int size, char c)
{
	int sizze = size;
	char *arr;
	int i;

	if (sizze == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(*arr) * sizze);

	for (i = 0; i < sizze; i++)
	{
		if (arr == NULL)
		{
			return (NULL);
		}
		arr[i] = c;

	}

	return (arr);
}
