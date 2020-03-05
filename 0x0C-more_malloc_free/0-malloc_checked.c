#include "holberton.h"
#include <stdlib.h>


void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == 0)
	{
		exit(98);
	}
	return (ptr);
}
