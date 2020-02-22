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
char letters[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i]; i++)
		for (j = 0; j < 52; j++)
		{
			if (s[i] == letters[j])
				s[i] = rot[j];
		}
	return (s);
}
