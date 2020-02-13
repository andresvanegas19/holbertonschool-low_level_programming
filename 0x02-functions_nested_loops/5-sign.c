#include "holberton.h"

/**
 * print_sign - this function will display if is a negative number or it isn't
 * @n: the character to print
 *
 * Return: On success 1.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (n = 1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (n = 0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (n);
	}
	return (n);
}
