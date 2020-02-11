#include "holberton.h"
/**
 * int _islower - function to check for lowercase character
 *
 * Description: check for lowercase characters
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
