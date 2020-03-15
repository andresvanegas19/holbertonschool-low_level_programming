#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: is the arguments the function it take
 *
 * Return: the sum of the whole of numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sumalista;

	int sum = 0;
	unsigned int i = 0;

	if (n == 0)
		return (0);

	va_start(sumalista, n);

	for (i = 0; i < n; i++)
		sum += va_arg(sumalista, int);


	va_end(sumalista);

	return (sum);

}
