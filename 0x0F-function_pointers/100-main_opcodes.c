#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * main - prints opcodes of its own main function
 *
 * @argc: argument counts
 *
 * @argv: argument values
 *
 * Return: 0 for success
 */

int main(int argc, char **argv)
{
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	return (0);
}
