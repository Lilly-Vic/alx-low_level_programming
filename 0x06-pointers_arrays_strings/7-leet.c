#include "main.h"

/**
 * leet - a function that encodes a string
 * @str: string
 * Return: return encoded string
 */

char *leet(char *str)
{
	int n, i;
	char c[] = "ol_ea__t";

	for (n = 0; str[n] != '\0'; n++)
	{
		for (i = 0; c[i] != '\0'; i++)
		{
			if (str[n] == c[i] || str[n] == (c[i] - 32))
				str[n] = i + '0';
		}
	}
	return (str);
}
