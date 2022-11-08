#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of
 * the string given as a parameter.
 * @str: copied string
 * Return: return NULL if str = NULL,
 * or return pointer to aloocated space.
 */

char *_strdup(char *str)
{
	char *s;
	int i, length;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		length++;
	s = malloc(sizeof(char) * (length + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		s[i] = str[i];
	s[length] = '\0';

	return (s);
}
