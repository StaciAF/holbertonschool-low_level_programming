#include "holberton.h"

/**
 * read_textfile - reads a text file and print it to POSIX
 * @filename: text file given to be read and printed
 *
 * @letters: the number of letters it should read and print
 *
 * Return: actual number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int thisfile;
	ssize_t readC, writeC;
	char *buffer;

	if (filename == NULL)
		return (0);
	thisfile = open(filename, O_RDWR);

	if (thisfile == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	readC = read(thisfile, buffer, letters);
	if (readC == -1)
		return (0);

	writeC = write(STDOUT_FILENO, buffer, readC);
	if (writeC == -1 || writeC != readC)
		return (0);

	free(buffer);

	close(thisfile);
	return (writeC);
}
