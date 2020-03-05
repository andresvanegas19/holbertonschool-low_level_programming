#include <stdio.h>
#include <stdlib.h>

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

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
        {
                s2 = "";
        }
	while (s1[i])
	{
		i++;
		while (s2[j])
		{
			j++;
		}
	}

	pstr = malloc(sizeof(char) * ((i  + j)  + 1));
	if (pstr == NULL)
		return (NULL);

/* Reset the variables */
	i = 0, j = 0;

	while (s1[i])
	{
		pstr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		pstr[i] = s2[j];
		j++;
		i++;
	}
	pstr[i + 1] = '\0';

	return (pstr);
}
