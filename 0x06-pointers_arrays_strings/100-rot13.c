#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string encoded
 * Return: returns the endcoded string
 */

char *rot13(char *str)
{
	int n, i;

	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[++n])
	{
		for (i = 0; i <= 52; i++)
		{
			if (str[n] == data[i])
			{
				str[n] = rot13[i];
				break;
			}
		}
	}
	return (str);
}
