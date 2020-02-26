/**
 * _sqrt_recursion - use another function
 * @n: is the value it will square root
 * @mult: is the value to multiply to find the value of n
 *
 * Return: to another function to made a operation.
 */
int save(int n, int mult);
int _sqrt_recursion(int n)
{
	return (save(n, 0));
}

/**
 * save - make a operation of  natural square root of a number
 * @n: is the value it will square root
 * @mult: is the value to multiply to find the value of n
 *
 * Return: to another function to made a operation.
 */
int save(int n, int mult)
{
	if ((mult * mult) == n)
	{
		return (mult);
	}
	if (mult > n)
		return (-1);
	return (save(n, mult + 1));
}
