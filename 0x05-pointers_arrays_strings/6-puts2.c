#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting from the first character
 * @str: string
 * Return: Always 0
 */

void puts2(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		if (n % 2 == 0)
			_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
