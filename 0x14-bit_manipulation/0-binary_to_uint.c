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
/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 * @b:  is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if is not a digit
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned long int number = 0, i = 0;

	if (b == NULL)
		return (0);

	for (; b[i]; i++)
		if (_isalpha(b[i]))
			return (number);

	for (; *b; b++)
	{
		if (*b == '1')
			number = (number << 1) | 1;
		else if (*b == '0')
			number = number << 1;
	}

	return (number);
}
