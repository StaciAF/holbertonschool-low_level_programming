#include <stdio.h>
/**
 * main - prints arguments passed
 * @argc: argument counter
 *
 * @argv: array of arguments
 *
 * Description: prints all arguments received
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
