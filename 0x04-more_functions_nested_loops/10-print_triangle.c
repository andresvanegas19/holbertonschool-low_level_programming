#include "holberton.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal depent of the int
 * @n: the character to sign who long the lines it want.
 *
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				if ( b < c) 
				{
					_putchar(' ');
				}
				else 
				{
					_putchar('#');
				}
			c = size - 1;	
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
