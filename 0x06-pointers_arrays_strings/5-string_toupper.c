#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @str: character
 * Return: returns a character
 */

char *string_toupper(char *str)
{
	int count = 0;

	while (str[count++])
	{
		if (str[count] >= 'a' && str[count] <= 'z')
			str[count] -= 32;
	}
	return (str);
}
