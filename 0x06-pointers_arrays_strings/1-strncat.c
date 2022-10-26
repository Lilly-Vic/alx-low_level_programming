#include "main.h"

/**
 * _strncat - concatenates two strings and adds num of used bytes
 * @dest: destinations
 * @src: string to be appended
 * @n: number of bytes used
 * Return: returns pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int string1 = 0, string2 = 0;

	while (dest[string1++])
		string2++;

	for (string1 = 0; src[string1] && string1 < n; string1++)
		dest[string2++] = src[string1++];
	return (dest);
}
