#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints it to stdout
 * @filename: Name of the file
 * @letters: Number of characters to read
 *
 * Return: Number of read and written characters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char *data = NULL;
	ssize_t bytes_read = 0, bytes_written = 0;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);
	if (!fp)
		return (0);

	data = malloc(letters + 1);
	if (data == NULL)
	{
		close(fp);
		return (0);
	}

	bytes_read = read(fp, data, letters);
	if (bytes_read < 0)
	{
		free(data);
		close(fp);
		return (0);
	}
	data[bytes_read] = '\0';

	bytes_written = write(STDOUT_FILENO, data, bytes_read);
	if (bytes_written < 0)
	{
		free(data);
		close(fp);
		return (0);
	}

	free(data);
	close(fp);
	return (bytes_written);
}
