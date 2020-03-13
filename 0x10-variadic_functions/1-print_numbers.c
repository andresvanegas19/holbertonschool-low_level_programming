#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_them_all - returns the sum of all its parameters
 *
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list printnum;

	unsigned int i = 0;

	if (separator)
	{
		va_start(printnum, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(printnum, int));


			printf("%s", separator);
		}

		va_end(printnum);
	}
}
