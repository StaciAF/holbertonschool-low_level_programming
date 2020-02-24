#include "holberton.h"
/**
 * _memcpy - copies memory area
 * @dest: memory copied to dest
 *
 * @src: memory copied from source
 *
 * @n: amount of memory to be copied
 *
 * Description: function that copies memory area
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
