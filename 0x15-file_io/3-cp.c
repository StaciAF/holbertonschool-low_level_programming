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
{       int op_to, op_from, rd, wr;
	char buff[1024];

if (argc != 3)
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
exit(97);
	op_from = open(argv[1], O_RDONLY);
if (op_from == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
exit(98);
	op_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
if (op_to == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
exit(99);
	rd = read(op_from, buff, 1024);
	while (rd > 0)
	{
		wr = write(op_to, buff, rd);
if (wr == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
exit(99);
}
		rd = read(op_from, buff, 1024);
	}
if (rd == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
exit(98);
op_from = close(op_from);
op_to = close(op_to);
if (op_from == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op_from),
exit(100);
if (op_to == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op_to),
exit(100);
	return (0);
}
