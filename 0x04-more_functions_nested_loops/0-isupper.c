#include "holberton.h"
/**
* _isupper - checks for uppercase
*
* @c: character to be checked
*
* Description: checks for uppercase characters
* Return: 1 for uppercase else 0
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
