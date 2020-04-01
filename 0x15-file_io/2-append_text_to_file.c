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
	int thisfile, newcontent;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	thisfile = open(filename, O_RDWR | O_APPEND);

	if (thisfile == -1)
		return (-1);

	newcontent = write(thisfile, text_content, _strlen(text_content));
	close(thisfile);

	if (newcontent == -1)
		return (-1);

	return (1);
}
/**
 * _strlen - returns the length of a string
 * @s: string taken to check length
 *
 * Description: returns the length of given string
 * Return: length of string
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}
