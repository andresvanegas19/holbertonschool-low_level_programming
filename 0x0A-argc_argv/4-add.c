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

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < argc; i++)
	{
		if (*argv[i] >= 'a' || *argv[i] <= 'Z')
                {
                        sum += atoi(argv[i]);
                }

		else if (*argv[i] <= 'a' || *argv[i] >= 'Z')
		{
			printf("Error\n");
			return (1);
		}


	}
	printf("%d\n", sum);

	return (0);
}
