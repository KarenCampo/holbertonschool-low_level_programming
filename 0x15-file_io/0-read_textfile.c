#include "holberton.h"
/**
 * read_textfile - Reads a text file and prints it to the POSIX standoutput.
 * @filename: Name and path of the file
 * @letters: Number of letters it could read and print
 * Return: The actual number of letters it should read and print
 * 0 if filename is NULL
 * If write fails or does not write the expeted amount of bytes, return 0
 * If the file can't be openend or read, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fopen, fread;
	char *buffy;


	buffy = malloc(sizeof(char) * letters);
	if (buffy == NULL)
	{
		return (0);
	}

	if (filename == NULL)
	{
		return (0);
	}

	fopen = open(filename, O_RDONLY);
	if (fopen == -1)
	{
		return (0);
	}

	fread = read(fopen, buffy, letters);
	if (fread == -1)
	{
		return (0);
	}

	write(STDOUT_FILENO, buffy, fread);
	free(buffy);
	close(fopen);
	return (fread);
}
