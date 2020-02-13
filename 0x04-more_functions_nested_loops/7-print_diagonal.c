#include "holberton.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal depent of the int
 * @n: the character to sign who long the lines it want.
 *
 */

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			if (a != 1)
			{
				for (b = 0; b <= a - 2; b++)
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
