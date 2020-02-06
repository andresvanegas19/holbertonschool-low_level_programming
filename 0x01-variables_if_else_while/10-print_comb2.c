#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = '0'; a <= '9'; ++a)
	{
		putchar('0');
		putchar(a);
	}
	for (b = "10"; b <= "99"; ++b)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
