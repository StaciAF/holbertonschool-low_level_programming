#include "holberton.h"
/**
 * main - program that copies content of one file to another file
 * @argc: count of arguments
 *
 * @argv: arguments passed - file names
 *
 * Return: Nothing.
 */

int main(int argc, char *argv[])
{
	char *file_from = argv[1];
	char *file_to = argv[2];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
			exit(97);
	}

	if (file_from == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
	}

	if (file_to == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
			exit(99);
	}
	return (0);
}
