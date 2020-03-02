#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * is_num - determines if a string is a number
 * @s: pointer to a string
 *
 * Return: 1 if number, 0 if not
 */
int is_num(char *s)
{
	while (*s != '\0')
	{
		if (*s > '9' || *s < '0')
			return (0);
		 s++;
	}
	return (1);
}
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
		if (is_num(argv[counter]))
			sum += atoi(argv[counter]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
