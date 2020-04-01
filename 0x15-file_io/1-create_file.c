#include "holberton.h"

/**
 * create_file - function that creates a file
 * @filename: name of file to be created
 *
 * @text_content: NULL termed string to write to file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int thisfile, nocontent;

	if (filename == NULL)
		return (-1);

thisfile = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (thisfile == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

nocontent = write(thisfile, text_content, _strlen(text_content));

close(thisfile);

if (nocontent == -1)
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
