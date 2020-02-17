#include "holberton.h"

/**
<<<<<<< HEAD
 * print_diagonal -  draws a diagonal line on the terminal depent of the int
 * @n: the character to sign who long the lines it want.
=======
 * print_triangle -  draws a half of a triangle
 * @size: the character to sign who long is the triangle
>>>>>>> f13e98e1f164d2930d704364829cdc5d91f4369e
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
