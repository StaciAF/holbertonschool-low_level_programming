#include <stdio.h>
/**
 * main - prints its name
 * @argc: argument counter
 *
 * @argv: argument array
 *
 * Descrption: program that prints its name from command line
 * Return: 0 for success
 */
int main(int argc __attribute__ ((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
