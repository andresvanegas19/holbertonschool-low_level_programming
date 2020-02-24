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
	int i = 0;
	while (*s != '\0' && s[i] != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
