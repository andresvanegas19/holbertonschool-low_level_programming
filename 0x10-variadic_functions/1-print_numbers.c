#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator:  is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list printnum;

	unsigned int i = 0;

	va_start(printnum, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(printnum, int));
		if ((i != n - 1) && separator)
			printf("%s", separator);
	}
	putchar('\n');

	va_end(printnum);

}
