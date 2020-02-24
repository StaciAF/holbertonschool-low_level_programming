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
	int i, j, len;
	unsigned int k = 0;

	for (len = 0; accept[len]; len++)
	{
		;
	}

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
		}
		if (j == len)
			break;
	}
	return (k);
}
