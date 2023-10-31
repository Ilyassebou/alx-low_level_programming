#include "main.h"
#include <stdio.h>

/**
 * error_file - Checks whether the specified files can be opened.
 *
 * @file_from: The file to read from.
 * @file_to: The file to write to.
 * @argv: The arguments vector.
 *
 * Return: no return.
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Entry point for Holberton School code checker.
 *
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: Always returns 0.
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, close_error;
	ssize_t num_chars, num_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	num_chars = 1024;
	while (num_chars == 1024)
	{
		num_chars = read(file_from, buffer, 1024);
		if (num_chars == -1)
			error_file(-1, 0, argv);
		num_written = write(file_to, buffer, num_chars);
		if (num_written == -1)
			error_file(0, -1, argv);
	}

	close_error = close(file_from);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	close_error = close(file_to);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
