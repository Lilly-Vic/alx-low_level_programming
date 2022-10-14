#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all possible different combinations of three digits
 * Return: Always 0 (Success0
 */

int main(void)
{
	int a, b, c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			if (a < b && b < c)
			{
				putchar(a);
				putchar(b);
				putchar(c);

				if (a != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
