#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: given array
 * @size: size of array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!action || !array)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
