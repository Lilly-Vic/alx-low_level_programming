#include "main.h"

/**
 * _sqrt - returns the square root of a number
 * @n: test number
 * @i: squared number
 * Return: -1 or square root of i
 */

int _sqrt(int n, int i)
{
	if (n * n == i)
		return (n);
	if (n * n > i)
		return (-1);

	return (_sqrt(n + 1, i));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be used
 * Return: the square root of @n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (_sqrt(1, n));
}
