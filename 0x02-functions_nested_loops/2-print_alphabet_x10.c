#include "holberton.h"

/* Es una libreria que va usar el putchar */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int a, b;

	while (b < 9)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}	
	b++;
	_putchar('\n');
	}
}
