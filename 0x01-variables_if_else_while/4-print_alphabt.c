#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a, Z;
	char e = "\n";

	for (a = 'a'; a <= 'z'; ++a)
		if (a != 'e' && a != 'q')
			putchar(a);
	return (0);
}
