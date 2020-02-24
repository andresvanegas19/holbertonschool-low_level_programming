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
		if (*haystack == *needle)
			return haystack;
		haystack++;
	}

	return NULL;
}
