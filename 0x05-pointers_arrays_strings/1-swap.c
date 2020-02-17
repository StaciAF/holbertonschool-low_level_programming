#include "holberton.h"
/**
* swap_int - swaps values of two integers
* @a: one of two values taken
*
* @b: one of two values taken
*
* Description: function that swaps values of two integers
* Return: in main
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}
