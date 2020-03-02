#include <stdio.h>
#include <stdlib.h>
/**
 * main - print minimum number of coins to make change for an amount of money.
 *@argc: is the number of command line arguments
 *@argv: an array containing the program command line arguments
 *
 * Return: Always 1.
 */
int main(int argc, char *argv[])
{
	int i = 0, saldo = 0, cambio = 0;
	int coins[5] = {25, 10, 5, 1};

	if (argc == 1 || argc == 0)
	{
		printf("Error\n");
		return (1);
	}

	else if (argc == 2)
	{
		saldo = atoi(argv[1]);

		if (saldo < 0)
		{
			printf("0\n");
			return (0);
		}

		for (i = 0; i < 5 && saldo > 0; i++)
		{
			while (saldo >= coins[i])
			{
				saldo = saldo - coins[i];
				cambio++;
			}
		}

		printf("%d\n", cambio);
	}

	return (0);
}
