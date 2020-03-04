#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of a string
 * @s: string taken to check length
 *
 * Description: returns the length of given string
 * Return: length of string
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}
/**
 * str_concat - concatenates two strings
 * @s1: first given string - in front of s2
 *
 * @s2: second given string - behind s1
 *
 * Description: concatenates two strings
 * Return: NULL for failure otherwise return pointer
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2;
	unsigned int i, j;
	char *ptr3;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ptr3 = malloc(sizeof(len1 + len2 +1));

	if (ptr3 == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr3[i] = s1[i];
	}
	for (j = 0; s2[j]; j++, i++)
	{
		ptr3[i] = s2[j];
	}
	ptr3[i] = '\0';
	return (ptr3);
}
