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
	int p_id, size = 0;
	if (filename == NULL)
		return (-1);

    p_id = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (p_id < 0)
		return (-1);

	if (*text_content)
	{
		while(text_content[size])
			size++;
		write(p_id, text_content, size);
	}
	close(p_id);

    return (1);

}