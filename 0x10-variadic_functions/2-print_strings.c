#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list printstr;

	unsigned int i = 0;

	va_start(printstr, n);

	for (i = 0; i < n; i++)
	{
		const char *pstr = va_arg(printstr, const char*);

		if (pstr != NULL)
			printf("%s", pstr);
		else
			printf("(nil)");
		if ((i != n - 1) && separator)
			printf("%s", separator);

	}

	printf("\n");

	va_end(printstr);

}
