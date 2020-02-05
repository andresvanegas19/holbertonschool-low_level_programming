#include <stdio.h>
/* Display the size of each character*/
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int integro;
	float flotante;
	double doubleType;
	char charType;

	printf("Size of a char: %d", sizeof(charType));
	printf("Size of an int: %d", sizeof(integro));
	printf("Size of a long init: %d", sizeof(doubleType));
	printf("Size of a float: %d", sizeof(flotante));
	return (0);
}
