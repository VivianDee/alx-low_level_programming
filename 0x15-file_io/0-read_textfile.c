#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char *data = NULL;
	ssize_t bytes_read = 0, bytes_written = 0;;

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
