#include <stdio.h>
/**
 * print_rev - print the reverse of the string
 * @s: pointer to the string
 */

char *_strcpy(char *dest, char *src)
{
	while ( *src )
		*dest++ = *src++;
	*dest = '\0';
	printf("%d", *dest);
	return dest;
}
