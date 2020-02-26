/**
 * _pow_recursion - give the value of X raised to the power of Y
 * @x: an integer
 * @y: an integer
 *
 * Return: the value of the result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	if (y > 1)
	{
		return (x * _pow_recursion(x, y - 1));
	}

	return (0);
}
