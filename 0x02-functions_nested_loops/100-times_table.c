#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: integer
 * Return: Always 0 (Success)
 */

void print_times_table(int n)
{
	int rw, col, prd;

	if (n >= 0 && n < 15)
	{
		for (rw = 0; rw <= n; rw++)
		{
			for (col = 0; col <= n; col++)
			{
				prd = rw * col;

				if (col == 0)
					_putchar('0');
				else if (prd < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(prd % 10 + '0');
				}
				else if (prd >= 10 && prd < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((prd / 10) % 10 + '0');
					_putchar(prd % 10 + '0');
				}
				else if (prd > 99 && prd < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(prd / 100 + '0');
					_putchar((prd / 10) % 10 + '0');
					_putchar(prd % 10 + '0');
				}
			}
			_putchar('\n');
		}
		
	}
}
