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
	if (sizze == 0)
                return (NULL);

	char *arr = NULL;
	int i, sizze = size;

	arr = malloc(sizeof(*arr) * sizze);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < sizze; i++)
	{
		arr[i] = c;
	}


	return (arr);
}
