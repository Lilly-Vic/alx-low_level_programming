#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 * Return: Always 0
 */

void print_rev(char *s)
{
	int r = 0;

	while (s[r] != '\0')
		r++;
	r--;
	while (r >= 0)
	{
		_putchar(s[r]);
		r--;
	}
	_putchar('\n');
}
