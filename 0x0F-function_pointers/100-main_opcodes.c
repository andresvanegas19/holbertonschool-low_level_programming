#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 *@argc: is the number of command line arguments
 *@argv: an array containing the program command line arguments
 *
 * Return: Always 0
 */

unsigned char main(int argc, char *argv[])
{
	int bytess = atoi(argv[1]), i = 0;
	unsigned char *ptrmain = NULL;

	if (argc != 2)
	{
		printf("Error");
		exit(1);
	}
	if (bytess < 0)
	{
		printf("Error");
		exit(2);
	}

	ptrmain = (unsigned char *)main;

	for (i = 0; i < bytess; i++)
	{
		printf("%02hhx ", ptrmain[i]);
	}
	putchar('\n');

	return (0);
}
