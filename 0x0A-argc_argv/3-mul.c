#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments
 *@argc: is the number of command line arguments
 *@argv: an array containing the program command line arguments
 *
 * Return: Always 1.
 */

int main(int argc, char *argv[])
{
	int result, frstNum, secdNum;


	if (argc == 3)
	{
		frstNum = atoi(argv[1]);
		secdNum = atoi(argv[2]);
		result = frstNum * secdNum;
		printf("%d\n", result);
	}
	else
		printf("Error\n");

	return (1);
}
