#include "main.h"

/**
 * read_textfile - Reads a text file and prints a specified number of letters.
 *
 * @filename: The name of the file to be read.
 * @letters: The maximum number of letters to print.
 *
 * Return: The actual number of letters printed. If it fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDescriptor;
	ssize_t bytesRead, bytesWritten;
	char *buffer;

	if (filename == NULL)
		return (0);

	fileDescriptor = open(filename, O_RDONLY);

	if (fileDescriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	bytesRead = read(fileDescriptor, buffer, letters);
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	close(fileDescriptor);

	free(buffer);

	return (bytesWritten);
}
