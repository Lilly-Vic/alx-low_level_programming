#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string
 * Return: returns capitalized string
 */

char *cap_string(char *str)
{
	int n, i;
	char delimeters[] = " \t\n,;.!?\"(){}";

	for (n = 0; str[n] != '\0'; n++)
	{
		if (str[0] >= 97 && str[0] <= 122)
			str[0] = str[0] - 32;

		for (i = 0; delimeters[i] != '\0'; i++)
		{
			if (str[n] == delimeters[i] && str[n + 1] >= 97 && str[n + 1] <= 122)
				str[n + 1] = str[n + 1] - 32;
		}
	}
	return (str);
}
