#include "search_algos.h"

/**
 * linear_search - searches for a value in an array if integers
 * @array: pointer to the first element of the array we are searching
 * @size: the number of elements in the array
 * @value: the value we are searching for
 * Return: the index (int) where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	int *first;
	size_t i;

	if (array == NULL)
		return (-1);
	first = array;
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, first[i]);
		if (first[i] == value)
		{
			return ((int)(i));
		}
	}
	return (-1);
}
