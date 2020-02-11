#include "holberton.h"
#include <inttypes.h>
/**
 * _abs - computes absolute value
 *@n: integer to check
 *
 * Description: computes absolute value
 * Return: absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
		return (n);
}
