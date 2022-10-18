#include "main.h"

/**
 * print_alphabet - prints the alphabet
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
