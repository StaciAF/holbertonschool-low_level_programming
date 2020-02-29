#include <stdio.h>
/**
 * main - prints the count of arg passed
 * @argc: argument counter
 *
 * @argv: argument array
 *
 * Description: prints the number of arguments passed to it
 * Return: 0 for success
 */
int main (int argc, char* argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
