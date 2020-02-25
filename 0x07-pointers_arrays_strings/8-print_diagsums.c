#include <stdio.h>

/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers.
 * @a : pointer to a matrix
 * @size : size of array
 */

void print_diagsums(int *a, int size)
{
	int i, sumaPositiva = 0, sumaNegativa = 0;

	for (i = 0; i < (size * size) ;)
	{
		sumaPositiva += a[i];
		i = i + size + 1;
	}
	for (i = 0; i < (size * size) - size;)
	{
		i = i + size - 1;
		sumaNegativa += a[i];
	}
	printf("%d, %d\n", sumaPositiva, sumaNegativa);
}
