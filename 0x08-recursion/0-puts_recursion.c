#include "holberton.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer to the string
 */
void _puts_recursion(char *s)
{
	_putchar(*s);

	if (*s != '\0')
	{
		s++;
		_puts_recursion(s);
		if (*s == '\0')
		{
			_putchar('\n');
		}
	}

}
