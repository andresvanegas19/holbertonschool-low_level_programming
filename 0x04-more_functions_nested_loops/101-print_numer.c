#include "holberton.h"

/**
 * more_numbers - prints the numbers, from 0 to 14 just only putchar
 *
 * Return: return 0 is succesed
 */

void print_number(int n)
{
	if (n < 0)
        {
	
		_putchar(() + '0');
		_putchar(() + '0');


        }
	else if (n < 9)
	{
		_putchar(n);
	}
	else if (n < 99)
	{
		_putchar(() + '0');
		_putchar(() + '0');
	}
	else if (n < 999)
	{
		_putchar(() + '0');
		_putchar(() + '0');
		_putchar(() + '0');
	}
	else if (n < 9999)
        {
		_putchar(() + '0');
		_putchar(() + '0');
		_putchar(() + '0');
		_putchar(() + '0');
        }
}
