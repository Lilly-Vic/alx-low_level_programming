#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: smallest number in the array
 * @max: lagrest value in the array
 * Return: pointer to the address of the memory
 */

int *array_range(int min, int max)
{
	int *a;
	int n, i = 0;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(*a) * ((max - min) + 1));

	if (a != NULL)
	{
		for (n = min; n <= max; n++)
		{
			a[i] = n;
			i++;
		}
		return (a);
	}
	else
		return (NULL);
}
