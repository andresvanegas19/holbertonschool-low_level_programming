#include "holberton.h"

/**
 * _isalpha - this function to return 1 if is a letter
 * @c: The character to sign and change the value when I print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (c = 1);
	}
	else
	{
		return (0);
	}
}
