#include "holberton.h"

/**
 * _abs - the function return always a positive numbers
 * @n: the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n = n * -1);
	}
	return (n);
}
