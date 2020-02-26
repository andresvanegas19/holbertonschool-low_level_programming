/**
 * factorial - returns the factorial of a given number.
 * @n: an integer of It will factorial
 *
 * Return: give the result of the factorial.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n <= 1)
	{
		return (1);
	}

	return (n * factorial(n - 1))
}
