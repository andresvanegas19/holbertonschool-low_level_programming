#include "holberton.h"

/**
 * print_alphabet_x10 - this function do is print the alphabet
*/
void print_alphabet_x10(void)
{
	int a, b;

	for (; b < 9; b++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
	_putchar('\n');
	}
}
