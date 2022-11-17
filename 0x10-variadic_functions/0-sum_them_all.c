#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all its parameters
 * @n: num of parameters
 * Return: return sum or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;


	if (n == 0)
		return (0);
	
	va_start(args, n);
	
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, const unsigned int);
	}
	va_end(args);
	
	return (sum);
}
