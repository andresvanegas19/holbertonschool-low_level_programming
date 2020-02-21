#include "holberton.h"
#include <stdio.h>

/**
 * *_strncpy - copies a string
 * @dest: The character to print
 * @src: The character to print
 * @n: It's the limit of array of src
 *
 * Return: dest return the complite array.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return dest;
}
