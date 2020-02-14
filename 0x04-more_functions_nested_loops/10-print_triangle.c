#include "holberton.h"

/**
 * print_triangle -  draws a half of a triangle
 * @size: the character to sign who long is the triangle
 *
 */

void print_triangle(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				if (b <= (size - a))
				{
				_putchar(' ');
				}
				else
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

