#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* betty style doc for function main goes there  */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if(n > 1)
		printf("%3d is positive\n", n);
	else if(n < 1)
		printf("%3d is negative\n", n);
	else
		printf("%3d is zero\n", n);

	return (0);
}
