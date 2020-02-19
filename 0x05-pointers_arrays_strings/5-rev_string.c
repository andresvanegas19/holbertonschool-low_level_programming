#include "holberton.h"

/**
 * print_rev - print the reverse of the string
 * @s: pointer to the string
 */
void rev_string(char *s)
{
	int len = 0, b = 0, save;

	while (s[len] != '\0')
	{
		len++;
	}
    	len = len - 1;

	while (len >= b)    
	{
		save = *(s + b);
		*(s + b) = *(s + len);
		*(s + len) = save;
		len--;
		b++;
	}
}
