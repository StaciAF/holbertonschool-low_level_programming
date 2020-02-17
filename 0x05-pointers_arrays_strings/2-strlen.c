#include "holberton.h"
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
