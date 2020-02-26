#include "holberton.h"
/**
 * factorial - returns the factorial of a given number
 * @n: given number
 *
 * Description: function that returns the factorial
 *
 * Return: factorial of given number or -1 for error
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
		return (1);
		return (n * factorial(n - 1));
}
