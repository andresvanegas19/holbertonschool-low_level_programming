#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - it is a function to recive values and print towart to 98
 *@n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/

void print_to_98(int n)
{
	int a;

	if (n < 98)
	{
		for (a = n; a <= 98; a++)
		{
			printf("%d", a);
		if (!(a == 98))
		{
		printf(", ");
		}
		}
	putchar('\n');
	}

	if (n > 98)
	{
		for (a = n; a >= 98; a--)
		{
			printf("%d", a);
			if (!(a == 98))
			{
				printf(", ");
			}
		}
		putchar('\n');
	}
	if (n == 98)
	{
		printf("%d", n);
		putchar('\n');
	}
}
