#include "main.h"

/**
 * check - checks if string is a palindrome
 * @s: string
 * @length: length of @s
 * @index: index of string to be checked
 * Return: 1 if string is a palindrome and 0 if not
 */
int check(char *s, int length, int index)
{
	if (s[index] == s[length / 2])
		return (1);
	if (s[index] == s[length - index - 1])
		return (check(s, length, index + 1));
	return (0);
}


/**
 * find_strlen - finds the length of string
 * @s: string
 * Return: length of the string
 */
int find_strlen(char *s)
{
	int length = 0;

	if (*(s + length))
	{
		length++;
		length += find_strlen(s + length);
	}
	return (length);
}


/**
 * is_palindrome - returns true if the given string is a palindrome
 * @s: string to check
 * Return: true if the given string is a palindrome
 */

int is_palindrome(char *s)
{
	int index = 0;
	int length = find_strlen(s);

	if (!(*s))
		return (1);

	return (check(s, length, index));
}
