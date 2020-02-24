#include <stdio.h>

/**
 * _strstr - found the string we recive
 * @haystack: the string we checked
 * @needle: the string we found in th haystack
 *
 * Return: the phrase we found
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *a = haystack;
		char *b = needle;


		while (*haystack && *b && *haystack == *b)
		{
			haystack++;
			b++;
		}

		if (!*b)
			return (a);

		haystack = a + 1;
	}
	return (NULL);
}
