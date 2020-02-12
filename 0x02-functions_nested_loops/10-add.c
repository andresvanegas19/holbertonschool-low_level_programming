#include "holberton.h"

/**
 * add  - It's a function which recive two values and sum those values
 *@a: The character to print
 *@b: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/

int add(int a, int b)
{
	int c;

	c = a + b;
	return (c);

}
