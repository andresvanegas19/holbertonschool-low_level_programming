#include "holberton.h"

/**
 * print_last_digit - This function use a di
 * @a: the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/

int print_last_digit(int a)
{
	int b;

	if (a > 0 || a == 0)
	{
		b = a % 10;
		_putchar('0' + b);
		return (b);
	}
	else if (a < 0)
	{
		b = ((a * -1) % 10);
		_putchar('0' + b);
		return (b);
	}

	return (b);
}
