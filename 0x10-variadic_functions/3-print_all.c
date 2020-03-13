#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: is a list of types of arguments passed to the function
 *
 */
void print_all(const char * const format, ...)
{
	int i = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		printf("%c\n", format[i]);
	}
}
