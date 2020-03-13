#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 *
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = 0;

	if (n == 0)
		return (0);

	va_list listSum;

	va_start(listSum, n);

	for (i = 0; i < n; i++)
		sum += va_arg(listSum, int)


	va_end(listSum);

	return (sum);
}
