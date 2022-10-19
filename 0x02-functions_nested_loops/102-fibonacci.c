#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int n, f1, f2, next;
	f1 = 1;
	f2 = 2;

	for (n = 1; n <= 50; ++n)
	{
		if (f1 != 20365011074)
			printf("%ld, ", f1);
		else
			printf("%ld\n", f1);
		next = f1 + f2;
		f1 = f2;
		f2 = next;
	}
	return (0);
}
