#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: an concatenate string.
 */

char *str_concat(char *s1, char *s2)
{
	char *pstr = NULL;
	int i = 0, j = 0;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	while (s1[i])
	{
		i++;
		while (s2[j])
			j++;
	}

	pstr = malloc(sizeof(char) * i);

	if (pstr == NULL)
		return (NULL);

	while (str[j])
	{
		pstr[j] = str[j];
		j++;
	}

	return (pstr);
}
