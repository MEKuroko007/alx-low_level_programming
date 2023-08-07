#include "main.h"


void display_error(const char *message, int code);
void copy_file(const char *source_file, const char *destination_file);
/**
 * display_error - print error
 * @message:message
 * @code:code
 */
void display_error(const char *message, int code) {
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(code);
}
/**
 * copy_file - function to copy content of source to destination
 * @source_file:argv[1]
 * @destination_file:argv[2]
 */
void copy_file(const char *source_file, const char *destination_file) {
	int source_fd, destination_fd;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	source_fd = open(source_file, O_RDONLY);
	if (source_fd == -1) {
		display_error("Can't read from source file", 98);
	}

	destination_fd = open(destination_file, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (destination_fd == -1) {
		close(source_fd);
		display_error("Can't write to destination file", 99);
	}

	while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0) {
		bytes_written = write(destination_fd, buffer, bytes_read);
		if (bytes_written == -1) {
			close(source_fd);
			close(destination_fd);
			display_error("Can't write to destination file", 99);
		}
	}

	if (bytes_read == -1) {
		close(source_fd);
		close(destination_fd);
		display_error("Can't read from source file", 98);
	}

	close(source_fd);
	close(destination_fd);
}
/**
 * main - entry point to handle cp command
 * @argc:number of arguments include cp file
 * @argv:arguments
 * Return:Success
 */

int main(int argc, char *argv[]) {
	if (argc != 3) {
		display_error("Usage: cp file_from file_to", 97);
	}

	copy_file(argv[1], argv[2]);

	return 0;
}

