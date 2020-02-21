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
	int end;
	int holder;
	int size = 0;

	while (a[start] > n)
	{
		for (start = 0; start < (size / 2); start++)
	{
		holder = a[start];
		a[start] = a[end];
		a[end] = holder;
		end--;
	}
	}


}
