#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - takes three arguments to calcualate math operations
 * @argc: argument count
 *
 * @argv: arguent values passed in command line
 *
 * Return: calculation of two passed integers and given operator
 */
int (*get_op_func(char *s))(int, int);

int main(int argc, char *argv[])
{
	char *c;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	c = argv[2];
	ptr = (get_op_func(c));

	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(c, "/") || strcmp(c, "%")) && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", ptr(atoi(argv[1]), atoi(argv[3])));
	return (1);
}
