#include <stdio.h>
/**
 * _strcpy - copy the content to the array  to another array
 * @dest: pointer to the string
 * @src: pointer to the string
 * Return: they array to copie
 */

char *_strcpy(char *dest, char *src)
{
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	printf("%d", *dest);
	return (dest);
}
