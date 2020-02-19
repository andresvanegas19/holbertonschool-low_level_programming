#include <stdio.h>
/**
 * print_array - print the array
 * @a: pointer to the array
 * @n: point to the max of the array
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", *(a + b));
		if (b < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
