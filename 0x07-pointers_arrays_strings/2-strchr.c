#include "holberton.h"
#define NULL 0
/**
 * _strchr - locates a char in a string
 * @s: given string to be searched
 *
 * @c: char searched for
 *
 * Description: function that locates a character string; returns pointer
 * Return: Null if not char found or return c (char)
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (&s[i]);
		if (c == '\0')
			return (&s[i] - 1);
	}
	return (NULL);
}
