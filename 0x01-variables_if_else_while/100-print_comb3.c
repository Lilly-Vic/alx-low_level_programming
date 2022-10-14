#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, i;

	n = 0;
	i = 0;

	while (i < 9)
	{
		n = 0;
		while (n < 9)
		{
			if (i != n && i < n)
			{
				putchar(i);
				putchar(n);
				if (n == 8 && i == 7)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			n++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
