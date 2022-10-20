#include <stdio.h>

/**
 * main - Entry point
 * Description: finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int num1 = 1, num2 = 2, a;

	int n;

	for (n = 1; n <= 98; n++)
	{
		a = num1 + num2;

		if (n != 98)
			printf("%lu, ", a);
		else
			printf("%lu\n", a);
		num1 = num2;
		num2 = a;
	}
	return (0);
}
