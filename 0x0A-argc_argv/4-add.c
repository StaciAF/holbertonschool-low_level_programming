#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

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
	int counter, count;

	if (argc < 1)
	{
		printf("0\n");
	}
	for (counter = 1; counter < argc; counter++)
	{
	sum += atoi(argv[counter]);
	for (count = 0; argv[counter][count] != '\0'; count++)
	{
		if (!(isdigit(argv[counter][count])))
		{
			printf("Error\n");
			return (1);
		}
	}
	}
	printf("%d\n", sum);
	return (0);
}
