#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int source_fd, destination_fd, read_bytes, close_source, close_destination;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	source_fd = open(argv[1], O_RDONLY);
	if (source_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	destination_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((read_bytes = read(source_fd, buffer, BUFSIZ)) > 0)
	{
		if (destination_fd < 0 || write(destination_fd, buffer, read_bytes) != read_bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(source_fd);
			exit(99);
		}
	}

	if (read_bytes < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	close_source = close(source_fd);
	close_destination = close(destination_fd);
	if (close_source < 0 || close_destination < 0)
	{
		if (close_source < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_fd);
		if (close_destination < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", destination_fd);
		exit(100);
	}

	return (0);
}

