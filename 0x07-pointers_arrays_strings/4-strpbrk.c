#include "holberton.h"
#define NULL 0
/**
 * _strpbrk - adds function that searches a string for any set of bytes
 * @s: string to be compared
 *
 * @accept: second string to be compared by
 *
 * Description: searches a string for any of a set of bytes
 * Return: pointer to byte in s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}

	return (NULL);
}
