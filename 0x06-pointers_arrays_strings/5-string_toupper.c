#include "holberton.h"

/**
 * string_toupper - become the whole string to upper case 
 * @s: pointer to string
 *
 *Return: the string in uppercase
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
		s[i] -= 32;
		/* The - 32 is for down positon to the upper string */
		}
		i++;
	}
	return (s);
}
