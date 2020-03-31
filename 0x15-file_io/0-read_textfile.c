#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @letters: is the number of letters it should read and print
 * @filename: is the file will read the output
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t p_id, number_bytes;
	char *data;

	if (letters == 0)
		return (0);
	if (filename == NULL)
		return (0);

	p_id = open(filename, O_RDONLY);
	if (p_id < 0)
		return (0);

	data = malloc(sizeof(char) * letters);
	if (data == NULL)
		return(-1);

	number_bytes = read(p_id, data, letters);
	if (number_bytes < 0)
		return (0);

	data[number_bytes] = '\0';
	number_bytes++;

	write(1, data, number_bytes);

	free(data);
	close(p_id);
	return (number_bytes);
}