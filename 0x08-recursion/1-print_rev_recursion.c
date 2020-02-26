#include "holberton.h"
/**
 * _print_rev_recursion - prints string in reverse
 * @s: string to be reversed
 *
 * Description: function that prints string in reverse
 *
 * Return: in main
 */

void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}
