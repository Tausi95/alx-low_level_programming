#include "main.h"

#define BUFFER_SIZE 1024

/**
* error_and_exit - Display error message and exit with specified code.
* @code: Error code
* @message: Error message
*/
void error_and_exit(int code, const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(code);
}

/**
* main - Entry point of the program
* @argc: Number of command-line arguments
* @argv: Array of command-line argument strings
* Return: 0 on success, other values on failure
*/
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_and_exit(97, "Usage: cp file_from file_to");

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_and_exit(98, argv[1]);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (file_to == -1)
		error_and_exit(99, argv[2]);

	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1)
			error_and_exit(99, argv[2]);
	}

	if (bytes_read == -1)
		error_and_exit(98, argv[1]);

	if (close(file_from) == -1)
		error_and_exit(100, "Can't close file descriptor");

	if (close(file_to) == -1)
		error_and_exit(100, "Can't close file descriptor");

	return (0);
}
