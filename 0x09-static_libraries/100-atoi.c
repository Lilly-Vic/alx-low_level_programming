#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: input string
 * Return: integer
 */

int _atoi(char *s)
{
	unsigned int count = 0, size = 0, oi = 0, pn = 1, n = 1, m;
	
	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;
		
		if (*(s + count) == '-')
			pn *= -1;
		
		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				n *= 10;
			size++;
		}
		count++;
	}

	for (m = count - size; m < count; m++)
	{
		oi = oi + ((*(s + m) - 48) * n);
		n /= 10;
	}
	return (oi * pn);
}
