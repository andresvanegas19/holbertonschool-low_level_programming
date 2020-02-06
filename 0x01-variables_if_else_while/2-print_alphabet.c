#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a, Z;

	for (a = 'a'; a <= 'z'; ++a)
		putchar(a);
	for (Z = 'A'; Z <= 'Z'; ++Z)
		putchar(Z);
	return (0);
}
