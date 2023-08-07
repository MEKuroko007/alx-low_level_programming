#include "main.h"

/**
 * create_file - Creates a file.
 * @filename:name of the file
 * @text_content:Content of the file
 * Return: -1 or 1
 */
int create_file(const char *filename, char *text_content)
{
	int file, write_result, text_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_len])
			text_len++;
	}

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	write_result = write(file, text_content, text_len);
	close(file);

	if (write_result == -1)
		return (-1);

	return (1);
}

