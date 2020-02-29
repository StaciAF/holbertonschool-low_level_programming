#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds two numbers
 * @argc: argument counter
 *
 * @argv: array of arguments
 *
 * Description: performs addition with input numbers
 * Return: 0 is success
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int counter;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (counter = 1; counter < argc; counter++)
	{
		if (!atoi(argv[counter]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[counter]);
	}
	printf("%d\n", sum);
	return (0);
}
