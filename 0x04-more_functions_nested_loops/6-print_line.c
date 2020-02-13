#include "holberton.h"

/**
 * print_line -  that draws a straight line in the terminal
 * @n: the character to sign who many tabs are print
 *
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
