#include "holberton.h"

/**
 * main - copies the content of a file to another file
 * @ac: is the number of arguments
 * @av: are the files it will send
 *
 * Return: the status of the result
 */

/*  Usage: cp file_from file_to  */

int main(int ac, char *av[])
{
	int status_from, status_to, close_from, value_read, value_write;
	char *buffer;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(98);
	}

	status_from = open(av[1], O_RDONLY);
	if (status_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}



/* Esto necesita una correcon */
	status_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (status_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		close_from = close(status_from);
		if (close_from == -1)
		{
			dprintf(2, "Error: Can't close fd %d\n", status_to);
			exit(100);
		}
		exit (99);
	}
	buffer = malloc(1024);
	if (buffer == NULL)
		exit (99);
	value_read = read(status_from, buffer, sizeof(buffer));
	if (value_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	while (value_read > 0)
	{
		value_write = write (status_to, buffer, value_read);
		if (value_write == -1)
		{
				dprintf(2, "Error: Can't write to %s\n", av[1]);
				exit(9);
		}
		value_read = read(status_from, buffer, sizeof(buffer));
		if (value_read == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
	}

	close(status_from);
	close(status_to);
	free(buffer);

	return (0);
}
