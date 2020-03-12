#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes function in each array element
 * @array - given array
 *
 * @size: size of the given array
 *
 * @action: pointer to function to be used
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action != '\0')
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}

}
