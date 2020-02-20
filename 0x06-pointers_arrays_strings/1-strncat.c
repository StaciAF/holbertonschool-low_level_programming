#include "holberton.h"
/**
* _strncat - concatenatrs two strings
* @dest: string 1
*
* @src: string 2 - appended to string 1
*
* @n: size of src
*
* Description: concatenates two strings using bytes
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
