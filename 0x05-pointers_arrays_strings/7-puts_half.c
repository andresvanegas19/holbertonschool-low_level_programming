#include "holberton.h"

/**
 * puts_half - only display the middle of the array
 * @str: pointer to the string
 */
void puts_half(char *str)
{
	int a, b, last;

	for (a = 0; str[a] != '\0'; a++)
	{
	}
	if ((a % 2) == 0)
	{
		last = (a / 2);
		for (b = last; str[b] != '\0'; b++)
		{
			_putchar(str[b]);
		}
	}
	else
	{
		last = ((a - 1) / 2);
		for (b = last; str[b] != '\0'; b++)
		{
			_putchar(str[b]);
		}
	}
	_putchar('\n');
}
