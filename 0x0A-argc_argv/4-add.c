#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 *@argc: is the number of command line arguments
 *@argv: an array containing the program command line arguments
 *
 * Return: Always 1.
 */

int main(int argc, char *argv[])
{
	int sum, i;

	if (argc == 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) < 0)
		{
			printf("0\n");
			return (0);
		}
		if (atoi(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
                {
			printf("Error\n");
                        return (1);
                }

	}
	printf("%d\n", sum);

	return (0);
}
