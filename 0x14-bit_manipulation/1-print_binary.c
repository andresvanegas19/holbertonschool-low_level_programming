#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: is the integer.
 *
 */
void print_binary(unsigned long int n)
{
	int aux = 0;
	unsigned long int binary_number = n;

/* found how many times it need to do the operation*/
	while ((binary_number >>= 1) > 0)
		aux++;

	for (; aux >= 0; aux--)
/* Choose in ternary if the number need to be 1 or 0*/
		putchar(((n >> aux) & 1) ? '1' : '0');
}
