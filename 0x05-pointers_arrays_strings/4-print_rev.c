#include "holberton.h"

/**
 * print_rev - print the reverse of the string
 * @s: pointer to the string
 */
void print_rev(char *s)
{
	int a, b;
	for (a = 0; s[a] != '\0'; a++)
	{
	}
	for (b = a; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
