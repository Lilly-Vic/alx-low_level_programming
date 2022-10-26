#include "main.h"
/**
 * _strncpy - function that copies a string
 * function should work exactly like strncpy
 * @dest: buffer storing string copy
 * @src: string source
 * @n: max num of byte copied
 * Return: returns pointer to destination string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
