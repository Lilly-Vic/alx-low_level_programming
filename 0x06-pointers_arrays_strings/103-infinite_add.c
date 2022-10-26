#include "main.h"

/**
 * infinite_add - a function that adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: store result
 * @size_r: size of buffer
 * Return: returns pointer to result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a = 0, b = 0, c, d = 0, m, n, i = 0;

	while (n1[a] != '\0')
		a++;
	while (n2[b] != '\0')
		b++;
	if (a > b)
		d = a;
	else
		d = b;

	if (d + 1 > size_r)
		return (0);

	for (c = d - 1; c >= 0; c--)
	{
		a--;
		b--;
		if (a >= 0)
			m = n1[a] - '0';
		else
			m = 0;
		if (b >= 0)
			n = n2[b] - '0';
		else
			n = 0;
		r[c] = (m + n + i) % 10 + '0';
		i = (m + n + i) / 10;
	}
	if (i == 1)
	{
		r[d + 1] = '\0';
		if (d + 2 > size_r)
			return (0);
		while (d-- >= 0)
			r[d + 1] = r[d];
		r[0] = i + '0';
	}
	return (r);
}
