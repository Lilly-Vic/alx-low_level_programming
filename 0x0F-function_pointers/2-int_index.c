#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: an array
 * @size: number of elements in array
 * @cmp: function which compare values
 * Return: returns -1 if no element match
 * or If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
