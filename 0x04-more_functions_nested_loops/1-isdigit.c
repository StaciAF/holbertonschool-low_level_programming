#include "holberton.h"
/**
* _isdigit - checks for 0 to 9
*@c: digit to be checked
*
* Description: checks for 0 to 9
* Return: 1 if single digit else 0
*/

int _isdigit(int c)
{
	if (c <= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
