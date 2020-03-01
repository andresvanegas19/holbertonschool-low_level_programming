#include <stdio.h>

/**
 * main - prints its own name
 *@argc: is the number of command line arguments
 *@argv: an array containing the program command line arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", *argv);

	return (0);
}
