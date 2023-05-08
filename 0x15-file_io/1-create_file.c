#include "main.h"

/**
 * create_file - A functon that creates a file and writes into it
 * @filename: The name of the file to be created
 * @text_content: The content of the file craeted
 *
 * Return: 1 (Success) or -1 (Failure)
 */

int create_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t bytes_written = 0;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (!fp)
		return (-1);

	if (text_content == NULL)
		return (-1);
	bytes_written = write(fp, text_content, strlen(text_content));
	if (bytes_written < 0)
	{
		close(fp);
		return (-1);
	}

	close(fp);
	return (1);
}
