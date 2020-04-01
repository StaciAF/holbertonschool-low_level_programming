#include "holberton.h"
#define STDERR STDERR_FILENO

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
	int file_from, file_to;

	if (argc != 3)
		dprintf(STDERR, "Usage: cp file_from file_to\n", exit(97));
	return (0);
}
