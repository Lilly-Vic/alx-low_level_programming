#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @r: integer input
 *
 * Return: the value of r
 */

int _abs(int r)
{
	if (r > 0)
		return (r);
	else if (r < 0)
		return (-r);
	else
		return (r);
}
