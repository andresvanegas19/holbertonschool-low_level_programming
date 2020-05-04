#include "holberton.h"

/**
 * _islower - this function to return a value if is a letter un lowercase
 * @c: The character to sign and change the value when I print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c = 1);
	}
	else
	{
		return (0);
	}
}
