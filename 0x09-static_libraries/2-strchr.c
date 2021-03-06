#include <stdio.h>

/**
 * _strchr - prints when the pointer find the letter
 * @s: the address of array
 * @c: the letter It find
 *
 * Return: the rest of the string
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
		return (s);

	return (NULL);
}
