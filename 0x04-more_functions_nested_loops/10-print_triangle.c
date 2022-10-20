#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 *
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{
	int a = 0, b, c = size - 1;

	if (size > 0)
	{
		for (; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				if (b < c)
					_putchar(' ');
				else
					_putchar('#');
			}
			c--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
