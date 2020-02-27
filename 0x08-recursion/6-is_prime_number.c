/**
 * checkprime - valid if the number is a prim
 * @n: is the value it will square root
 * @check: is the counter
 *
 * Return:  the value of the number.
 */

int checkprime(int n, int check)
{
	if (n <= 1)
		return (0);

	if (check < n)
	{
		if ((n % check) == 0)
			return (0);
	}
	else
	{
		return (1);
	}
	return (checkprime(n, (check + 1)));

}
/**
 * is_prime_number - print 1 if the integer is a prime number, otherws return 0
 * @n: is the value it will square root
 *
 * Return: to another function to made a operation.
 */

int is_prime_number(int n)
{
	return (checkprime(n, 2));
}
