#include <stdio.h>
/**
 * main - prints arguments
 * @argc: argument counter
 *
 * @argv: array of arguments
 *
 * Description: prints all arguments received
 *
 */
int main (int argc __attribute__ ((unused)), char* argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
