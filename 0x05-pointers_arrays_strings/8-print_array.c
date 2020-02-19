#include "holberton.h"
#include <stdio.h>
/**
* print_array - prints elements of an array
* @a: pointer for integer array
*
* @n: integer
*
* Description: prints elements of array of integers
* Return: in main
*/

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		if (j != 0)
		{
		printf(",");
		printf(" ");
		}
		printf("%d", a[j]);
	}
	putchar('\n');


}
