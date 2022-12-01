#include "main.h"

/**
 * get_bit - get the value of a bit at the given index
 * @n: the number
 * @index: index starting from 0 of the bit required
 * Return: The converted value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;
	
	if (index > 63)
		return (-1);
	
	bit = n >> index;

	return (bit & 0x1);
}
