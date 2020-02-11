#include "holberton.h"
#include <ctype.h>
/**
 * _islower - function to check for lowercase character
 * @c: the character to check
 *
 * Description: check for lowercase characters
 * Return: 1 for lowercase and 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
