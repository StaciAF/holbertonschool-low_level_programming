#include "holberton.h"
#include <ctype.h>
/**
 * _isalpha - function to check for alphabet character
 * @c: the character to check
 *
 * Description: check for alphabet characters
 * Return: 1 for alpha and 0 if not
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
