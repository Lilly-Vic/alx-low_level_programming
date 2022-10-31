#include "main.h"

/**
 * _strchr - unction that locates a character in a string
 * @s: string
 * @char: character
 * Return: returns pointer to first occurance of c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
