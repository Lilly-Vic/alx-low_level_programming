#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first pointer
 * @b: second pointer
 * Return: Always 0
 */

swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
