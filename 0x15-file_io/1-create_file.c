#include "holberton.h"
/**
 * create_file - Function that creates a file.
 * @filename: The name of the file to create
 * @text_content: Is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fopen, fwrite, len;

	if (!filename)
	{
		return (-1);
	}
	fopen = open(filename, O_TRUNC | O_CREAT | O_RDWR, 0600);

	if (fopen == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		len = 0;
		while (text_content[len] != '\0')
		{
			len++;
		}
		fwrite = write(fopen, text_content, len);
		if (fwrite == -1)
		{
			return (-1);
		}
	}

	close(fopen);
	return (1);
}

