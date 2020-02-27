#include "holberton.h"
/**
 * is_prime_number - checks if given int is prime
 * @n: given integer to check
 *
 * Description: function checks integer from prime number status
 * Return: 1 if prime else return 0
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= i)
	{
		return (0);
	}
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	if (n % 5 == 0)
		return (0);
	else
		return (is_prime_number(i + 1));
}
