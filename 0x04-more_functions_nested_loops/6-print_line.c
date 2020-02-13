#include "holberton.h"

/**
 * more_numbers - prints the numbers, from 0 to 14 just only putchar
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
