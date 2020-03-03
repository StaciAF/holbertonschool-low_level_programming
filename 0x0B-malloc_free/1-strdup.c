#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer with malloc with a copy of given string
 * @str: given string to be copied
 *
 * Description: returns a pointer with malloc with a copy of given string
 * Return: NULL if str NULL or pointer containing copy of string
 */
char *_strdup(char *str)
{
	int i;
	int len = 0;
	char *c;

	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0; str[len]; len++)
	{
		;
	}
	c = (char *)malloc(sizeof(*c) * len);
	if (c == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		c[i] = str[i];
	}
	return (c);
}
