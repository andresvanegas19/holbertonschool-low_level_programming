#include "holberton.h"

/* Es una libreria que va usar el putchar */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
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
