#include "main.h"
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd, read_b, close_source, close_destination;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from_fd = open(argv[1], O_RDONLY);
	if (from_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((read_b = read(from_fd, buffer, BUFSIZ)) > 0)
	{
		if (to_fd < 0 || write(to_fd, buffer, read_b) != read_b)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(from_fd);
			exit(99);
		}
	}
	if (read_b < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_source = close(from_fd);
	close_destination = close(to_fd);
	if (close_source < 0 || close_destination < 0)
	{
		if (close_source < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_fd);
		if (close_destination < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_fd);
		exit(100);
	}
	return (0);
} /*essalhi*/

