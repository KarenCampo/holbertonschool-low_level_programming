#include "holberton.h"
/**
 * append_text_to_file - Function that appends text at the end of a file.
 * @filename: The name of the file
 * @text_content:  Is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fopen, fwrite, len;

	if (filename == NULL)
	{
		return (-1);
	}

	fopen = open(filename, O_WRONLY | O_APPEND, 0600);

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
