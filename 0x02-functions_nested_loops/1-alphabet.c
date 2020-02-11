#include "holberton.h"

/* Es una libreria que va usar el putchar */
/**
 * print_alphabet - is a function you can  print the letter to a an z
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int a;

/*This function do is make the list of abedesari*/
	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
		_putchar('\n');
}
