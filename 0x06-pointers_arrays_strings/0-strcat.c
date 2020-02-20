#include "holberton.h"
/**
* _strcat - concatenates two strings
* @dest: ending string
*
* @src: string appended to dest
*
* Description: function that concatenates two strings
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int j, i;

	for (i = 0; dest[i]; i++)
		;
	for (j = 0; src[j]; j++)
	{
		dest[i] = src[j];
		i++;
	}
		dest[i] = '\0';
		return (dest);

}
