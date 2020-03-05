#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of a string
 * @s: string taken to check length
 *
 * Description: returns the length of given string
 * Return: length of string
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}

/**
 * argstostr - function that concatenates all program arguments
 * @ac: argument count
 * @av: argument values
 * Description: cats all arguments passed to program
 * Return: Pointer to new string or NULL
 */
char *argstostr(int ac, char **av)
{

	int i, n, c, len, new;
	char *array;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]);
	}
	array = malloc(len * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < ac; n++)
	{
		for (c = 0; av[n][i] != '\0'; c++)
		{
			array[new] = av[n][i];
			new++;
		}
		array[new] = '\n';
	}
	array[new] = '\0';
	return (array);
}
