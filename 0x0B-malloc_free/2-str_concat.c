#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: size of width of the array
 * @height: size of height of the rray
 *
 * Return: an array with the width and height delimited
 */

int **alloc_grid(int width, int height)
{
	char *parr = NULL;
	int i = 0, j = 0;

	parr = malloc (sizeof(int *) * height);
	if (parr == NULL)
	{
		free(parr);
		return (NULL);
	}

/* assign memory to the deep of the pointers */

	for (i = 0; i < width; i++)
	{
		parr[i] = malloc (sizeof(int) * width);
		if (parr[i] == NULL)
		{
			j = 0;
			while (j < i)
			{
				free (parr[j]);
				j ++;
				return (NULL);
			}
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			parr[i][j] = 0;
		}
	}

	return (parr);
}
