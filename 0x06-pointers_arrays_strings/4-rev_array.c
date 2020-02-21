#include "holberton.h"
/**
 * reverse_array - reverses contents of array
 * @a: array
 *
 * @n: number of elements of the array
 *
 * Description: reverses the content of an array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int holder;

	for (start = 0; start < end; start++)
	{
		holder = a[start];
		a[start] = a[end];
		a[end] = holder;
		end--;
	}


}
