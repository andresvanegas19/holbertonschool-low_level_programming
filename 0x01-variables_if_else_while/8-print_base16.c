#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a, Z;

	for (Z = '0'; Z <= '9'; ++Z)
		putchar(Z);
	for (a = 'a'; a <= 'f'; ++a)
		putchar(a);
		putchar('\n');

	return (0);
}
