#include <stdio.h>
#include "holberton.h"
/**
 * helper - finds input from n
 * @bc: check against base case
 *
 * @n: given num to be squared
 *
 * Description: helper function for sqrt recursion
 * Return: natural sqrt
 */
int helper(int n, int bc)
{

	if (n * n == bc)
		return (n);
	if (n * n > bc)
		return (-1);
	return (helper(n + 1, bc));
}
/**
 * _sqrt_recursion - returns the natural sqrt
 * @n: given number
 *
 * Description: function mimics sqrt command - recursively
 *
 * Return: sqrt or -1 if no natural sqrt
 */
int _sqrt_recursion(int n)
{
	return (helper(1, n));
}
