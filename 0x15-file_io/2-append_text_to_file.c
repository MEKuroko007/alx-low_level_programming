#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename:Name of the file.
 * @text_content:Content of the file
 * Return:some values
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, write_result, text_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_len])
			text_len++;
	}

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	write_result = write(file, text_content, text_len);
	close(file);

	if (write_result == -1)
		return (-1);

	return (1);
}

