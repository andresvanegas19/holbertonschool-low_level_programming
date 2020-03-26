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

unsigned binary_to_uint(const char *bits)
{
    unsigned int number;
    int i = 0;

	for (;bits[i]; i++)
	    if (_isalpha(bits[i]))
	    {
	        return (0);
	    }

    for (number = 0; *bits; bits++)
    {
        if (*bits == '1')
            number = (number << 1) | 1;
        else if (*bits == '0' )
            number = number << 1;
    }

    return (number);
}