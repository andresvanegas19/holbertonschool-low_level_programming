#include "holberton.h"

/* Es una libreria que va usar el putchar */
/**
 * main - check the code for Holberton School students.
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
