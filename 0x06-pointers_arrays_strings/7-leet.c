#include "holberton.h"

/**
 * leet - encodes string to 1337
 *
 * @s: string given to change
 *
 *
 * Description: encodes string into 1337
 * Return: string (s)
 */

char *leet(char *s)
{

	int i, j;
      char letters[52] = "aAeEoOtTlL";
      char num[12] = "4433007711";

	for (i = 0; s[i]; i++)
		for (j = 0; j < 52; j++)
		{
			if (s[i] == letters[j])
				s[i] = num[j];
		}
	return (s);
}
