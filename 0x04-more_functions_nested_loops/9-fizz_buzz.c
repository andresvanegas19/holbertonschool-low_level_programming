#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100,multiples of three and five.
 */

void main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3 == 0 || a % 3 == 3) && a % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (a % 3 == 0 || a % 3 == 3)
		{
			printf("Fizz ");
		}
		else if ((a % 10) == 0 || (a % 10) == 5)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", a);
		}
	}
}

