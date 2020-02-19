#include "holberton.h"

/**
 * print_rev - print the reverse of the string
 * @s: pointer to the string
 */
void rev_string(char *s)
{
	int a, b;
	for (a = 0; s[a] != '\0'; a++)
	{
	}
	for (b = a; b >= 0; b--)
	{
		*(s + (a - 1)) = *(s + b);
	}
}
