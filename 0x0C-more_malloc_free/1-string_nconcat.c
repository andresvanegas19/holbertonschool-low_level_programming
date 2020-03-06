#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat  - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: the limit of the s2 string
 *
 * Return:  returned pointer shall point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pstr = NULL;
	unsigned int i = 0, count = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	if (n >= j)
		n = j;

	pstr = malloc(sizeof(char) * (i + n + 1));
	if (pstr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		pstr[i] = s1[i];
	}
	for (count = 0; count < n; count++, i++)
		pstr[i] = s2[count];

	pstr[i] = '\0';

	return (pstr);
}
