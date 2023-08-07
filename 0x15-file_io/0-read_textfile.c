#include "main.h"

/**
 * read_textfile - Reads and prints the content of a text file to stdout.
 * @filename: The name of the file
 * @letters:Max number to read
 * Return: The number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}

	bytes_read = read(file, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	free(buffer);
	close(file);

	if (bytes_written != bytes_read)
		return (0);

	return (bytes_written);
}

