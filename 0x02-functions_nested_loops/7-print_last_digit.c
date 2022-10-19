#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number
 * @n: last digit number
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int ld;

	ld = (n % 10);

	if (ld < 0)
	{
		ld = (-1 * ld);
	}
	_putchar(ld + '0');
	return (ld);
}
