#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in array
 *
 * @size: size (bytes) of array
 *
 * Description: allocates memory for an array
 * Return: NULL if size or nmemb 0 or failure otherwise return pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);

}
