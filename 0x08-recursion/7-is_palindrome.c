#include "holberton.h"
/**
 * is_palindrome - finds palindrome in given string
 * @s: string provided
 *
 * Description: function returns a call if string is a palindrome
 * Return: 1 if true; 0 if not
 */

int is_palindrome(char *s)
{
	char start = 0;
	char end;

	for (i = 0; s[i]; i++)
	{
		;
	}
	end = i - 1;
	if (s[start] != s[end])
		return (0);
	if (start == end)
		return (1);
	return (is_palindrome(++start, --end, *s);
}
