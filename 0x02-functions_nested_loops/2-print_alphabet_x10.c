#include "main.h"

/**
 * main - Entry point
 * print_alphabet_x10: prints 10 times the alphabet
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char l;

	while (i < 10)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		i++;
		_putchar('\n');
	}
}
