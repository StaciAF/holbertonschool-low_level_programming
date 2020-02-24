#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string to be compared
 *
 * @accept: string to be compared against
 *
 * Description: gets the length of a prefix substring
 * Return: matching bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int k = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
			if (accept[j] == s[i] && j <= i)
				k++;
	}
	return (k);
}
