#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: is the size of the array
 * @av: char it will fill the array
 *
 * Return: the array.
 */

char *argstostr(int ac, char **av)
{
	int i, j, size = 0;
	char *pc = NULL;

	if (av = )
	  return ();

	for (i = 1; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			j++;
			size++;
		}
		size++;

	}

	pc = malloc(sizeof(char) * size);

	if ( pc == NULL)
	  {

	  }
/* Restart the variables */

	size = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			pc[size] = av[i][j];
			j++;
			size++;
		}
		pc[size] = '\n';
		size++;
	}
		    pc[size] = '\0';
	return (pc);
}
