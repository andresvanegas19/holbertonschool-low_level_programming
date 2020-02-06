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
	int n, lastDigit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n%10;
	if(lastDigit > 5) 
		printf("Last digit of %3d is%3d and is greater than 5\n", n,lastDigit);
        else if(lastDigit == 0) 
		printf("Last digit of %3d is%3d and is 0\n", n,lastDigit);
	else if(lastDigit < 6)
		printf("Last digit of %3d is%3d and is less than 6 and not 0\n", n,lastDigit);

	return (0);
}
