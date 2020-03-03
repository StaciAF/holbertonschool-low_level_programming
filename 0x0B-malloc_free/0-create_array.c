#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @c: initialize array with this char
 *
 * Description: creates an array of char then initializes it with given char
 * Return: NULL if size 0 or failure otherwise return pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	s = (char *)malloc(sizeof(char) * size);
	if (s == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
