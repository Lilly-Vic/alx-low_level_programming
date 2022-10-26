#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: input array
 * @n: input n elements
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int m = 0;

	for (; m < n; m++)
	{
		printf("%d", *(a + m));
		if (m != (n - 1))
			printf(", ");
	}
	printf("\n");
}
