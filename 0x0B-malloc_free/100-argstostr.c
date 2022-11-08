#include "main.h"

/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: count of args passed to the function
 * @av: array of arguments
 * Return: return pointer to the new string
 */

char *argstostr(int ac, char **av)
{
	char *new_string;
	int s, i, j, sum;

	if (ac == 0)
		return (NULL);

	for (s = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			s++;
		s++;
	}
	new_string = malloc(sizeof(char) * (s + 1));

	if (new_string == NULL)
	{
		free(new_string);
		return (NULL);
	}

	for (i = j = sum = 0; sum < s; j++, sum++)
	{
		if (av[i][j] == '\0')
		{
			new_string[sum] = '\n';
			i++;
			sum++;
			j = 0;
		}
		if (sum < s - 1)
			new_string[sum] = av[i][j];
	}
	new_string[sum] = '\0';

	return (new_string);
}
