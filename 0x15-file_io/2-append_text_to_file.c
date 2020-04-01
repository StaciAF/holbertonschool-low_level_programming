#include "holberton.h"

/**
 * append_text_to_file - function appends text at the end of a file
 * @filename: file given to have content appended
 *
 * @text_content: string to add at end of file - NULL terminated
 *
 * Return: 1 on success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int thisfile;

	if (filename == NULL)
		return (-1);

	thisfile = open(filename, O_RDWR | O_APPEND);

	if (text_content != NULL)
		return (1);
	else
		return (-1);

	write(thisfile, text_content, _strlen(text_content));

	close(thisfile);

	return (1);
}
