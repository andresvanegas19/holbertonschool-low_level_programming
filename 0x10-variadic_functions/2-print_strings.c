#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 *
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list printstr;

	unsigned int i = 0;

	if (separator)
	{
		va_start(printstr, n);

		for (i = 0; i < n; i++)
		{
			const char *pstr = va_arg(printstr, const char*);
			printf("%s", pstr);
			if (i != n - 1)
				printf("%s", separator);

		}

		putchar('\n');

		va_end(printstr);
	}
}
