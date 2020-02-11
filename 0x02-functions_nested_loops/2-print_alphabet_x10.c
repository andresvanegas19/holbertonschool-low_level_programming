#include "holberton.h"

/**
 * main - Entry point
 *
 */
void print_alphabet_x10(void)
{
	int a, b;

	while (b < 9)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
	b++;
	_putchar('\n');
	}
}
