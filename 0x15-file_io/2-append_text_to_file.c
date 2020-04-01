#include "holberton.h"

/**
 * append_text_to_file - check the code for Holberton School students.
 * @filename:  is the name of the file
 * @text_content: terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p_id = 0, size = 0, validacion;

	if (!filename)
		return(-1);
	if (text_content)
		return(1);

	p_id = open(filename,  O_APPEND | O_WRONLY, 0600);
	if (p_id == -1)
		return (-1);

	while (text_content[size])
		size++;

	validacion = write(p_id, text_content, size);
	if (validacion == -1)
		return (-1);

	close(p_id);
	return (1);
}