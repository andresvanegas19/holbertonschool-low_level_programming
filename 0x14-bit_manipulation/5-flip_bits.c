#include "holberton.h"

/**
 * flip_bits - count the bits need it to get from one number to another.
 * @m: is a number to compare
 * @n: is a number to compare.
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count, result = n ^ m;

	for (count = 0; result; count += result & 1, result >>= 1)
		;

	return (count);
}
