#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - splits a string into words.
 * @stra: is the size of the array
 *
 * Return: the array.
 */

char **strtow(char *str)
{
        char *pparr = NULL;
        int i = 0, size = 0, found = 0;

        if (str == NULL || str == "")
        {
                return (NULL);
        }

        while (*str++)
        {
                if (*str != ' ')
                {
                        size++;
                 
                }
/*si mi actual es diferente a un espacio y la siguiente es un espaacio malloc*/
                else if (*str != ' ' && *(str + 1) == a' ' )
                {
			parr = malloc(sizeof(char) * size)
				}
        }

        pstr = malloc(sizeof(char) * size);
        if (pstr == NULL)
        {
                return (NULL);
        }

/* Restart the variables */

     
        for (i = 0;  str[i] != '\0'; i++)
        {
                if (str[i] != ' ')
                {
                        pstr = str[i];
                }
                pstr = '\n';
        }

        pstr[size] = '\0';

        return (pstr);
}
void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; ++i)
	{
		printf("%s\n", tab[i]);
	}
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
	char **tab;

	tab = strtow("      Holberton School         #cisfun      ");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
	return (0);
}
