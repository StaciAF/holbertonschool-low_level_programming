#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all program arguments
 * @ac: argument count
 * @av: argument values
 * Description: cats all arguments passed to program
 * Return: Pointer to new string or NULL
 */
char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	return (*av);
}
