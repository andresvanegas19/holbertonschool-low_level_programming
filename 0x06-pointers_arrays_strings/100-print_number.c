/**
 * print_number - print number only whit putchar
 * @n: the number
 *
 */
void print_number(int n)
{
	int copy = n;

	if (copy < 0)
	{
		putchar('-');
		copy = copy * -1;
	}
	if ((copy / 10) > 0)
	{
		print_number(copy / 10);
	}

	putchar((copy % 10) + '0');
}
