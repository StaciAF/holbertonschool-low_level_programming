#include "holberton.h"
/**
 * _strcpy - copies a string pointed to by src
 * @dest: pointer for buffer
 *
 * @src: pointer for string
 * Description: copies a string pointed to by src
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
		dest[i] = '\0';
	}
	return (dest);
}
