#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int rw, col, prd, tens, ones;

	for (rw = 0; rw <= 9; rw++)
	{
		for (col = 0; col <= 9; col++)
		{
			prd = rw * col;
			tens = prd / 10;
			ones = prd % 10;

			if (col == 0)
			{
				_putchar('0');
			}
			else if (prd < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else 
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
		}
		_putchar('\n');
	}
}
