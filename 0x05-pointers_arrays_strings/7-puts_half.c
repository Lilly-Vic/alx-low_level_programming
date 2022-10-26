#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: input string
 * Return: Always 0
 */

void puts_half(char *str)
{
	int half = 0, n;

	while (half >= 0)
	{
		if (str[half] == '\0')
			break;
		half++;
	}

	if (half % 2 == 1)
		n = half / 2;
	else
		n = (half - 1) / 2;

	for (n++; n < half; n++)
		_putchar(str[n]);
	_putchar('\n');
}
