#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @s: string given to change
 *
 * Description: encodes string using rot13
 * Return: string (s)
 */

char *rot13(char *s)
{
	int i, j;
char letters[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char rot[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 53; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}
	return (s);
}
