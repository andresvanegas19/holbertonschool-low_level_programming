#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c, d;

	for (a = '0'; a <= '9'; ++a)
	{
		for (b = '0'; b <= '9'; ++b)
		{
			for (c = a; c <= '9'; ++c)
			{
				if (b == '0')
				{
					d = b;
				}
				else
				{
					d = b + 1;
				}
				for (; d <= '9'; ++d)
				{
				if (!(c == '0' && d == '0'))
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);

					if (!(b == '8' && d == '9' && c == '9'))
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
