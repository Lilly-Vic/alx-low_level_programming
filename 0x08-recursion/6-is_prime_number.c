#include "main.h"

/**
 * _is_prime - verify if number is prime
 * @p: possible prime number
 * @f: factor check
 * Return: 1 if @p is prime, 0 otherwise
 */

int _is_prime(int p, int f)
{
	if (f <= 1)
		return (1);
	else if (p % f == 0)
		return (0);

	return (_is_prime(p, f - 1));
}

/**
 * is_prime_number - returns true if the number is prime
 * @n: the number to check
 * Return: true if the number is prime
 */

int is_prime_number(int n)
{
	int f = n / 2;

	if (n <= 1)
		return (0);
	return (_is_prime(n, f));
}
