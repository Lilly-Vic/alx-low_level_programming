#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}