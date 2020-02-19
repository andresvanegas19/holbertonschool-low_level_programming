#include <stdio.h>
/**
 * print_rev - print the reverse of the string
 * @s: pointer to the string
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
