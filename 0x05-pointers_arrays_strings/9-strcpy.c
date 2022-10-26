#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to the dest
 * @dest: destination
 * @src: source
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int n;

	for (n = 0; *(src + n) != '\0'; n++)
	{
		dest[n] = *(src + n);
	}
	dest[n] = '\0';

	return (dest);
}
