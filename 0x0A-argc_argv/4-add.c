#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument counter
 *
 * @argv: array of arguments
 *
 * Description: performs muliplication on two input numbers
 *
 */
int main (int argc, char* argv[])
{
	int sum = 0;
	int counter;

	if(argc == 1)
	{
		printf("Error\n");
		return (0);
	}
	for(counter = 1; argv[counter] != NULL; ++counter)
	{
		sum += atoi(argv[counter]);
	}
	printf("%d\n", sum);
	return (0);
}
