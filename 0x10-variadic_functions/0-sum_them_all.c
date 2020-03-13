#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all arguments (parameters)
 * @n: number of parameters passed
 *
 * Return: sum or 0 if failure
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum;

	va_start(args, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
