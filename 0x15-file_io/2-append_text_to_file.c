#include "main.h"
/**
 * append_text_to_file - A function that appends text at the end of a file.
 * @filename: The name of the file
 * @text_content: The content tot be added to the file
 *
 * Return 1 (Success) or -1 (Failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t bytes_written = 0;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);
	if (!fp)
		return (-1);

	if (text_content == NULL)
		return(-1);
	bytes_written = write(fp, text_content, strlen(text_content));
	if (bytes_written < 0)
	{
		close(fp);
		return (-1);
	}

	close(fp);
	return (1);
}
