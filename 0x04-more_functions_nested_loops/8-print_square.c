#include "holberton.h"

/**
 * print_square -  prints a square
 * @size: the character to sign a square.
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
