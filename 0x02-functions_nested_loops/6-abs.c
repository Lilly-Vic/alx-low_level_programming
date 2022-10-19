#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @r: integer input
 * Return; Always 0 (Success)
 */

int _abs(int r)
{
	if (r > 0)
	{
		return (r);
	}
	else if (r < 0)
	{
		return (-r);
	}
	else
	{
		return (r);
	}
}
