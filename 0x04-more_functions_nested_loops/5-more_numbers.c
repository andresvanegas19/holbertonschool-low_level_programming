#include "holberton.h"

/**
 * more_numbers - prints the numbers, from 0 to 14 just only putchar
 */

void more_numbers(void)
{
	int a, b;

	for (a = 0; a <= 11; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar((b / 10) + '0');
			}
			_putchar((b % 10) + '0');
		}
	_putchar('\n');
	}
}
