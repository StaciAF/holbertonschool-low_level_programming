#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings passed
 * @separator: string to be printed between integers
 *
 * @n: number of strings passed
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char*);
		if (s == 0)
			printf("(nil)");
		else
		printf("%s", s);
		if (i != (n - 1) && separator != 0)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");

}
