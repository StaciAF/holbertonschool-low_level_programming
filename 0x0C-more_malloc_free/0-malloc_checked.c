#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned integer passed from main
 *
 * Description: function that allocates memory using malloc
 * Return: pointer or exit status 98 if malloc failed
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == 0)
	{
		free(ptr);
		exit(98);
	}
	else
	return (ptr);
}
