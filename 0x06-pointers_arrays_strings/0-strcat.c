#include "main.h"

/**
 * _strcat - concatenates two strings
 * it appends the src string to the dest string
 * @dest: destination
 * @src: appended string
 * Return: returns pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int string1 = 0, string2 = 0;

	while (dest[string1++])
		string2++;

	for (string1 = 0; src[string1]; string++)
		dest[string2++] = src[string1];

	return (dest);
}
