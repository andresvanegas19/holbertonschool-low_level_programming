#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - newly space in memory, which contains a copy of the string
 * @str: pointer to the new string
 *
 * Return: an string.
 */

char *_strdup(char *str)
{
	char *pstr = NULL;
	int i = 0, j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

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
