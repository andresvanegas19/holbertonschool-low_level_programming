#include "holberton.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal depent of the int
 * @n: the character to sign who long the lines it want.
 *
 */

void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
			_putchar(35);
			if (b == size)
			{
				_putchar('\n');
			}
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
