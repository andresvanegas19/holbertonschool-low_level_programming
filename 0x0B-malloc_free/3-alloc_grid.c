#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - give 2 dimensional array of integers
 * @width: size of the array
 * @height: size of the array
 *
 * Return: the array
 */
int **alloc_grid(int width, int height)
{
	int **pparr, i = 0, j = 0;

	if (width < 1)
	{
		return (NULL);
	}

	if (height < 1)
	{
		return (NULL);
	}

	pparr = malloc(sizeof(int *) * height);

	if (pparr == NULL)
	{
		free(pparr);
		return (NULL);
	}

/* assign memory to the deep pointers */

	for (i = 0; i < height; i++)
	{
		pparr[i] = malloc(sizeof(int) * width);
		if (pparr[i] == NULL)
		{
			for (j = 0; j <= i; j++)
			{
				free(pparr[j]);
			}
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			pparr[i][j] = 0;
		}
	}

	return (pparr);
}
