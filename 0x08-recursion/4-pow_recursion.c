#include "holberton.h"
/**
 * _pow_recursion - returns the value of x raised to y
 * @x: integer to be raised to exponent
 *
 * @y: given exponent
 *
 * Description: function that returns the value of x raised to the power of y
 * Return: value of exponent - if lower than zero: return -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
