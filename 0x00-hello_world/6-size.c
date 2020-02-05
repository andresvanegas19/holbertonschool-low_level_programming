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
	long int integrolargo;
	long long int integromaslargo;
	char charType;

	printf("Size of a char: %ld byte(s)\n", sizeof(charType));
	printf("Size of an int: %ld byte(s)\n", sizeof(integro));
	printf("Size of a long init: %ld byte(s)\n", sizeof(integrolargo));
	printf("Size of a long long init: %ld byte(s)\n", sizeof(integromaslargo));
	printf("Size of a float: %ld byte(s)\n", sizeof(flotante));
	return (0);
}
