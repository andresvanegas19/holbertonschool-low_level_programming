#include "holberton.h"

/**
 * create_file - function that creates a file.
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int p_id, size = 0, validacion = 0;

	if (filename == NULL)
		return (-1);

	p_id = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (p_id == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[size])
			size++;
		validacion = write(p_id, text_content, size);
		if (validacion == -1)
			return (-1);
	}
	close(p_id);

	return (1);
}
