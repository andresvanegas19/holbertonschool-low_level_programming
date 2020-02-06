#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	float a, b;

	for (a = '0'; a <= '9'; ++a)
	{
		for (b = '1'; b <= '9'; ++b)
		{
			putchar(a);
			putchar(b);
			if (a != '9' || b != '9')
			{
				putchar(' ');
				putchar(',');
			}
		}
	}
	putchar('\n');

	return (0);
}
