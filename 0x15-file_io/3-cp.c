#include "main.h"
#include <stdio.h>

/**
 * error_exit - Handle errors and exit with a specific code and message.
 *
 * @code: The exit code.
 * @message: The error message.
 */

void error_exit(int code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

/**
 * main - Entry point for the program.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, or the corresponding error code on failure.
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t nchars, bytes_written;
	char buffer[1024];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to");

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (file_from == -1)
		error_exit(98, "Error: Can't read from file");

	if (file_to == -1)
		error_exit(99, "Error: Can't write to file");

	do {
		nchars = read(file_from, buffer, 1024);
		if (nchars == -1)
			error_exit(98, "Error: Can't read from file");
		bytes_written = write(file_to, buffer, nchars);
		if (bytes_written == -1)
			error_exit(99, "Error: Can't write to file");
	} while (nchars == 1024);

	if (close(file_from) == -1)
		error_exit(100, "Error: Can't close file_from");

	if (close(file_to) == -1)
		error_exit(100, "Error: Can't close file_to");

	return (0);
}
