#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: bytes container
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, bytes;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (bytes = 0; accept[bytes] != s[i]; bytes++)
		{
			if (accept[bytes] == '\0')
				return (i);
		}
	}
	return (i);
}
