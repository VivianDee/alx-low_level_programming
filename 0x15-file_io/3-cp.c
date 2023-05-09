#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define LETTERS 1024

/**
  * copy_text_to_file - Copies the content of one file to another
  * @filefrom: Name of the file to copy from
  * @fileto: Name of the file to copy to
  *
  * Return: The number of characters written to fileto
  */
int copy_text_to_file(const char *filefrom, const char *fileto)
{
	char buff[LETTERS];
	int fp, cp;
	ssize_t read_chars = 0, written_chars = 0;

	fp = open(filefrom, O_RDONLY);
	if (fp == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", filefrom);
		exit(98);
	}

	cp = open(fileto, O_WRONLY | O_CREAT | O_TRUNC | O_EXCL, 0664);
	if (cp == -1)
	{
		close(fp);
		dprintf(2, "Error: Can't write to %s\n", fileto);
		exit(99);
	}

	while ((read_chars = read(fp, buff, LETTERS)) > 0)
	{
		written_chars = write(cp, buff, read_chars);
		if (written_chars == -1)
		{
			close(fp);
			close(cp);
			dprintf(2, "Error: Can't write to %s\n", fileto);
			exit(99);
		}
	}
	    
	if (read_chars == -1)
	{
		close(fp);
		close(cp);
		dprintf(2, "Error: Can't read from file %s\n", filefrom);
		exit(98);
	}

	if (close(fp) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fp);
		exit(100);
	}

	if (close(cp) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", cp);
		exit(100);
	}

	return written_chars;
}

/**
  * main - Entry point
  *
  * Return: Always 0.
  */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_text_to_file(av[1], av[2]);
	return 0;
}
