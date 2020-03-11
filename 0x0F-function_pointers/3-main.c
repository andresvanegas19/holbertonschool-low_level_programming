#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - adds positive numbers
 *@argc: is the number of command line arguments
 *@argv: an array containing the program command line arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
	     && argv[2][0] != '/' && argv[2][0] != '%') || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if (atoi(argv[3]) == 0 && (argv[2][0] != '/' ||  argv[2][0] != '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%i\n", (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
