#include "holberton.h"

/**
 * print_rev - print the reverse of the string
 * @s: pointer to the string
 */
void print_rev(char *s)
{
	int len =0;

	while (s[len] != '\0')    
	{
      len++;
    }
    len = len - 1;
    while (s[len] > 0 )    
    {
      _putchar(s[len]);
      len--;
    } 
	_putchar('\n'); 
}
