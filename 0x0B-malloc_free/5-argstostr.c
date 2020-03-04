#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - concatenates all the arguments
 * @ac: is the size of the array
 * @av: char it will fill the array
 *
 * Return: the array.
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j;
	char *pc = NULL;



	while (i < ac)
	{
		printf("%s\n", av[i]);
		i++;
		for (j = 0; av[i] != '\0'; j++)
		{
			printf("%s\n", av[i][j]);
		}


	}



	printf("%d\n", i);



	return (pc);
}
